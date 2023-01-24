#include <iostream>
#include <windows.h>
using namespace std;

void SetWindowAndScreenBuffer(HANDLE hStdOut, int numX, int numY)
{
    SMALL_RECT windowSize = {0, 0, numX - 1, numY}; //declare and initialize window size
    SetConsoleWindowInfo(hStdOut, TRUE, &windowSize); //change console window size

    COORD bufferSize = {numX * 1.5, numY * 1.5}; //create a COORD to hold the buffer size; buffer wider than window
    SetConsoleScreenBufferSize(hStdOut, bufferSize); //change the internal buffer size
}

class ObjectClass
{
private:

public:

    int numFrames;
    COORD area;
    COORD coord;
    WORD color;
    int frameLength;
    CHAR_INFO **frame;

    ObjectClass(int numframes, short areaX, short areaY, short coordX, short coordY, WORD clr)
    {
        numFrames = numframes;
        area.X = areaX;
        area.Y = areaY;
        coord.X = coordX;
        coord.Y = coordY;
        color = clr;
        frameLength = areaX * areaY;

        frame = new CHAR_INFO *[numFrames]; //define CHAR_INFO 2D dynamic array
        for (int i = 0; i < numFrames; ++i)
        {
            frame[i] = new CHAR_INFO[frameLength];
        }
    }

    void PrintFrame(HANDLE hStdOut, int arrIndex)
    {
        COORD objectPos = {0, 0}; //starting print position of objectSize; x and y = 0 to print whole object
        SMALL_RECT printObjectTo = {coord.X, coord.Y, coord.X + area.X - 1, coord.Y + area.Y - 1}; //starting and ending coords to print object onto screen buffer; the dimensions will equal the objectSize

        WriteConsoleOutput(hStdOut, frame[arrIndex], area, objectPos, &printObjectTo); //second argument points to array: CHAR_INFO value and attribute for each array element
    }

    void WalkLeft(HANDLE hStdOut, int moveSpaces, int moveSpeed, int startFrame, int endFrame)
    {
        COORD objectPos = {0, 0}; //starting print position of objectSize; x and y = 0 to print whole object
        int counter = 0;

        for (int i = 0; i < moveSpaces; ++i)
        {
            for (int f = startFrame; f < endFrame + 1; ++f)
            {
                if (counter == moveSpaces)
                    break;
                SMALL_RECT printObjectTo = {coord.X, coord.Y, coord.X + area.X - 1, coord.Y + area.Y - 1}; //starting and ending coords to print object onto screen buffer; the dimensions will equal the objectSize
                coord.X--;
                WriteConsoleOutput(hStdOut, frame[f], area, objectPos, &printObjectTo); //second argument points to array: CHAR_INFO value and attribute for each array element
                Sleep(moveSpeed);
                counter++;
            }
        }
        SMALL_RECT printObjectTo = {coord.X, coord.Y, coord.X + area.X - 1, coord.Y + area.Y - 1};
        WriteConsoleOutput(hStdOut, frame[0], area, objectPos, &printObjectTo);
    }
};

class PrintFrames
{
private:

public:

    int numFrames;
    COORD area;
    COORD coord;
    WORD color;
    int frameLength;

    COORD bgCoord; //coord used to read in from hidden screen buffer

    CHAR_INFO *backGround = NULL; //store full hidden screen buffer
    CHAR_INFO **bgFrame = NULL; //background frames
    CHAR_INFO **printFrame = NULL; //merge object frames and background frames

    //initialize data variables
    void StoreData(int numframes, ObjectClass objectClass)
    {
        numFrames = numframes; //move spaces plus one for fill current coord
        area = objectClass.area;
        coord = objectClass.coord;
        color = objectClass.color;
        frameLength = objectClass.area.X * objectClass.area.Y;

        bgCoord = objectClass.coord;
    }

    //read in full screen buffer before adding moving objects to buffer
    void ReadInScreenBackGround(HANDLE hStdOut, CHAR_INFO *bGround, COORD screenSize)
    {
        backGround = new CHAR_INFO [screenSize.X * screenSize.Y];
        backGround = bGround;
    }

    //define bgFrames and printFrames
    void DefineBGFramesPrintFrames()
    {
        bgFrame = new CHAR_INFO *[numFrames];
        printFrame = new CHAR_INFO *[numFrames];

        for (int i = 0; i < numFrames; ++i)
        {
            bgFrame[i] = new CHAR_INFO [frameLength];
            printFrame[i] = new CHAR_INFO [frameLength];
        }
    }

    //initialize bgFrames from hidden backGround screen buffer before adding moving objects
    void InitializeBGFrames(HANDLE hStdOut, int moveDirection)
    {
        COORD buffer_index = {0, 0};

        //initialize bgFrames
        for (int i = 0; i < numFrames; ++i) //move spaces
        {
            if (moveDirection == 7) //move left
                bgCoord.X--;
            else if (moveDirection == 3) //move right
                bgCoord.X++;

            SMALL_RECT smallRct = {bgCoord.X, bgCoord.Y, bgCoord.X + area.X - 1,
                                   bgCoord.Y + area.Y - 1
                                  };
            ReadConsoleOutput(hStdOut, bgFrame[i], area, buffer_index, &smallRct);
        }
    }

    //initialize printFrames
    void InitializePrintFrames(HANDLE hStdOut, ObjectClass objectClass, int objStartFrame,
                               int objCycleStartFrame, int objCycleEndFrame)
    {
        int counter = objStartFrame;

        for (int j = 0; j < numFrames; ++j) //dependent on move spaces
        {
            if (counter > objCycleEndFrame)
                counter = objCycleStartFrame; //start objectClass.frame = start frame; end objectClass.frame = end frame
            for (int i = 0; i < frameLength; ++i)
            {
                if (objectClass.frame[counter][i].Char.AsciiChar != ' ')
                {
                    printFrame[j][i].Char.AsciiChar = objectClass.frame[counter][i].Char.AsciiChar;
                    printFrame[j][i].Attributes = objectClass.frame[counter][i].Attributes;
                }
                else
                {
                    printFrame[j][i].Char.AsciiChar = bgFrame[j][i].Char.AsciiChar;
                    printFrame[j][i].Attributes = bgFrame[j][i].Attributes;
                }
            }
            counter++;
        }
    }

    //initialize printFrames: background in foreground
    void InitializeBGFramesPrintFrames(HANDLE hStdOut, ObjectClass objectClass, int objStartFrame,
                                       int objCycleStartFrame, int objCycleEndFrame)
    {
        int counter = objStartFrame;

        for (int j = 0; j < numFrames; ++j) //dependent on move spaces
        {
            if (counter > objCycleEndFrame)
                counter = objCycleStartFrame; //start objectClass.frame = start frame; end objectClass.frame = end frame
            for (int i = 0; i < frameLength; ++i)
            {
                if (bgFrame[j][i].Char.AsciiChar == ' ')
                {
                    printFrame[j][i].Char.AsciiChar = objectClass.frame[counter][i].Char.AsciiChar;
                    printFrame[j][i].Attributes = objectClass.frame[counter][i].Attributes;
                }
                else
                {
                    printFrame[j][i].Char.AsciiChar = bgFrame[j][i].Char.AsciiChar;
                    printFrame[j][i].Attributes = bgFrame[j][i].Attributes;
                }
            }
            counter++;
        }
    }

    //print single printFrame index
    void PrintFrame(HANDLE hStdOut, int arrIndex)
    {
        COORD objectPos = {0, 0}; //starting print position of objectSize; x and y = 0 to print whole object
        SMALL_RECT printObjectTo = {coord.X, coord.Y, coord.X + area.X - 1, coord.Y + area.Y - 1}; //starting and ending coords to print object onto screen buffer; the dimensions will equal the objectSize

        WriteConsoleOutput(hStdOut, printFrame[arrIndex], area, objectPos, &printObjectTo); //second argument points to array: CHAR_INFO value and attribute for each array element
    }

    //print each printFrame no coord movement
    void NoMove(HANDLE hStdOut, ObjectClass &objectClass, int moveDuration)
    {
        COORD buffer_index = {0, 0};

        for (int i = 0; i < numFrames; ++i) //dependent on move spaces
        {
            SMALL_RECT printObjectTo = {objectClass.coord.X, objectClass.coord.Y,
                                        objectClass.coord.X + area.X - 1, objectClass.coord.Y + area.Y - 1
                                       };
            WriteConsoleOutput(hStdOut, printFrame[i], area, buffer_index, &printObjectTo);
            Sleep(moveDuration);
        }
    }

    //print each printFrame moving left
    void MoveLeft(HANDLE hStdOut, ObjectClass &objectClass, int moveDuration)
    {
        COORD buffer_index = {0, 0};

        for (int i = 0; i < numFrames; ++i) //dependent on move spaces
        {
            objectClass.coord.X--;
            SMALL_RECT printObjectTo = {objectClass.coord.X, objectClass.coord.Y,
                                        objectClass.coord.X + area.X - 1, objectClass.coord.Y + area.Y - 1
                                       };
            WriteConsoleOutput(hStdOut, printFrame[i], area, buffer_index, &printObjectTo);
            Sleep(moveDuration);
        }
    }

    //print each printFrame moving right
    void MoveRight(HANDLE hStdOut, ObjectClass &objectClass, int moveDuration)
    {
        COORD buffer_index = {0, 0};

        for (int i = 0; i < numFrames; ++i) //dependent on move spaces
        {
            objectClass.coord.X++;
            SMALL_RECT printObjectTo = {objectClass.coord.X, objectClass.coord.Y,
                                        objectClass.coord.X + area.X - 1, objectClass.coord.Y + area.Y - 1
                                       };
            WriteConsoleOutput(hStdOut, printFrame[i], area, buffer_index, &printObjectTo);
            Sleep(moveDuration);
        }
    }
};

void TwoFramesNoMove(HANDLE hStdOut, PrintFrames &printClass, PrintFrames &printClassOne, int moveDuration)
{
    COORD buffer_index = {0, 0};

    if (printClass.numFrames != printClassOne.numFrames)
    {
        cout << "Error: Number of frames for both classes don't equal.";
        return;
    }

    for (int i = 0; i < printClass.numFrames; ++i)
    {
        //print first classObject frame
        SMALL_RECT printObjectTo = {printClass.coord.X, printClass.coord.Y,
                                    printClass.coord.X + printClass.area.X - 1,
                                    printClass.coord.Y + printClass.area.Y - 1
                                   };
        WriteConsoleOutput(hStdOut, printClass.printFrame[i],
                           printClass.area, buffer_index, &printObjectTo);

        //print second classObject frame
        SMALL_RECT printObjectToOne = {printClassOne.coord.X, printClassOne.coord.Y,
                                       printClassOne.coord.X + printClassOne.area.X - 1,
                                       printClassOne.coord.Y + printClassOne.area.Y - 1
                                      };
        WriteConsoleOutput(hStdOut, printClassOne.printFrame[i],
                           printClassOne.area, buffer_index, &printObjectToOne);

        Sleep(moveDuration);
    }
}

void ReadInScreenBackGround(HANDLE hStdOut, CHAR_INFO *bgFrame, COORD screenSize)
{
    COORD buffer_index = {0, 0};
    COORD backGroundCoord = {0, 0};
    SMALL_RECT smallRct = {backGroundCoord.X, backGroundCoord.Y, backGroundCoord.X + screenSize.X - 1,
                           backGroundCoord.Y + screenSize.Y - 1
                          };

    ReadConsoleOutput(hStdOut, bgFrame, screenSize, buffer_index, &smallRct);
}

void AddObject(HANDLE hStdOut, const CHAR_INFO objectArray[], COORD objectSize, COORD fillCoord)
{
    COORD objectPos = {0, 0}; //starting print position of objectSize; x and y = 0 to print whole object
    SMALL_RECT printObjectTo = {fillCoord.X, fillCoord.Y, fillCoord.X + objectSize.X - 1, fillCoord.Y + objectSize.Y - 1}; //starting and ending coords to print object onto screen buffer; the dimensions will equal the objectSize

    WriteConsoleOutput(hStdOut, objectArray, objectSize, objectPos, &printObjectTo); //second argument points to array: CHAR_INFO value and attribute for each array element
}

void MovingAttributeField(HANDLE hStdOut, ObjectClass objectClass, int color, int moveDuration)
{
    DWORD chars;
    int moveSpaces = objectClass.area.X + 10;

    COORD fillCoord;
    fillCoord.X = objectClass.coord.X - 5;
    fillCoord.Y = objectClass.coord.Y;

    for (int i = 0; i < moveSpaces; ++i)
    {
        fillCoord.Y = objectClass.coord.Y;
        for (int j = 0; j < objectClass.area.Y; ++j)
        {
            FillConsoleOutputAttribute(hStdOut, color, 1, fillCoord, &chars);
            fillCoord.Y++;
        }
        fillCoord.X++;
        Sleep(moveDuration);
    }
}

void MovingAttrFieldVertical(HANDLE hStdOut, ObjectClass objectClass, int color, int moveDuration)
{
    DWORD chars;
    int moveSpaces = (objectClass.area.Y * 3) + objectClass.area.Y;

    COORD fillCoord;
    fillCoord.X = objectClass.coord.X;
    fillCoord.Y = objectClass.coord.Y + (objectClass.area.Y * 1.5);

    //color
    for (int i = 0; i < moveSpaces; ++i)
    {
        FillConsoleOutputAttribute(hStdOut, color, objectClass.area.X, fillCoord, &chars);
        fillCoord.Y--;
        Sleep(moveDuration);
    }
}

