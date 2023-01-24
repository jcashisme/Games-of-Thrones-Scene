#include "gameOfThrones.h"
#include "gameOfThronesFrames.h"

int main()
{
    SetConsoleTitle(TEXT("Game of Thrones")); //window title
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); //declare and initialize HANDLE

    /**Hide cursor**/
    CONSOLE_CURSOR_INFO info; // = {1, 0}; <---alternative to the next two lines
    info.dwSize = 1;
    info.bVisible = 0;
    SetConsoleCursorInfo(hStdOut, &info);

    /**Set window and screen buffer size**/
    short numX = 120; //   <<<<<-------------------CONTROL
    short numY = 30; //   <<<<<-------------------CONTROL
    COORD screenSize = {numX, numY};
    COORD screenCoord = {0, 0};
    SetWindowAndScreenBuffer(hStdOut, numX, numY); //Set window size and screen buffer size







    /**Define class object and fill CHAR_INFO array with frames**/
    //intro objects
    ObjectClass intro(3, 81, 6, 20, 10, 0);
    FillIntro2(intro, 0);
    FillIntro3(intro, 1);
    FillIntro4(intro, 2);

    //background objects
    ObjectClass clouds(1, 34, 7, 10, 1, 7);
    FillClouds0(clouds, 0);

    ObjectClass wall(4, 29, 20, 12, 10, 7);
    FillWall0(wall, 0); //wall before fire
    FillWall1(wall, 1); //wall part melted
    FillWall2(wall, 2); //wall more melted
    FillWall3(wall, 3); //wall part gone

    ObjectClass mountain(1, 78, 13, 41, 1, 7);
    FillMountain0(mountain, 0);

    ObjectClass horizon(1, 12, 7, 0, 10, 7);
    FillHorizon0(horizon, 0);

    ObjectClass terrain(1, 79, 16, 41, 14, 6);
    FillTerrain0(terrain, 0);

    //moving objects
    ObjectClass lightning(6, 5, 7, 13, 6, 14);
    FillLightning0(lightning, 0);
    FillLightning1(lightning, 1);
    FillLightning2(lightning, 2);
    FillLightning3(lightning, 3);
    FillLightning4(lightning, 4);
    FillLightning5(lightning, 5);

    ObjectClass deadArmy(1, 50, 12, 120, 16, 11);
    FillDeadArmy0(deadArmy, 0);

    ObjectClass deadArmy1(15, 29, 12, 12, 16, 11);
    FillDeadArmy1(deadArmy1, 0);
    FillDeadArmy2(deadArmy1, 1);
    FillDeadArmy3(deadArmy1, 2);
    FillDeadArmy4(deadArmy1, 3);
    FillDeadArmy5(deadArmy1, 4);
    FillDeadArmy6(deadArmy1, 5);
    FillDeadArmy7(deadArmy1, 6);
    FillDeadArmy8(deadArmy1, 7);
    FillDeadArmy9(deadArmy1, 8);
    FillDeadArmy10(deadArmy1, 9);
    FillDeadArmy11(deadArmy1, 10);
    FillDeadArmy12(deadArmy1, 11);
    FillDeadArmy13(deadArmy1, 12);
    FillDeadArmy14(deadArmy1, 13);
    FillDeadArmy15(deadArmy1, 14);

    ObjectClass dragon(4, 18, 8, 125, 15, 10);
    FillDragon0(dragon, 0);
    FillDragon1(dragon, 1);
    FillDragon2(dragon, 2);
    FillDragon1(dragon, 3);

    ObjectClass dragonFire(4, 17, 5, 21, 17, 11);
    FillDragonFire0(dragonFire, 0);
    FillDragonFire1(dragonFire, 1);
    FillDragonFire2(dragonFire, 2);
    FillDragonFire3(dragonFire, 3);

    ObjectClass smallDragon(4, 6, 3, -10, 5, 10);
    FillSmallDragon0(smallDragon, 0);
    FillSmallDragon1(smallDragon, 1);
    FillSmallDragon2(smallDragon, 2);
    FillSmallDragon1(smallDragon, 3);




    /**************************************************************/
    /****************************Intro*****************************/
    /**************************************************************/

    cin.ignore(); //press enter to start

    /**intro screen buffer**/
    HANDLE introStdOut = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleScreenBufferSize(introStdOut, screenSize);
    SetConsoleCursorInfo(introStdOut, &info);

    /**declare and initialize print class**/
    PrintFrames introPrint;
    //no need to fill backGround member

    /**active screen buffer**/
    SetConsoleActiveScreenBuffer(introStdOut); //make intro screen buffer active

    /**add first intro to intro screen buffer**/
    introPrint.StoreData(3, intro);
    introPrint.DefineBGFramesPrintFrames();
    introPrint.InitializeBGFrames(introStdOut, 8);
    introPrint.InitializePrintFrames(introStdOut, intro, 0, 0, 0);

    introPrint.PrintFrame(introStdOut, 0);

    Sleep(2000);
    /**moving attribute field to show intro**/
    MovingAttributeField(introStdOut, intro, 11, 100);


    Sleep(2000);
    /**add second intro to intro screen buffer**/
    introPrint.InitializePrintFrames(introStdOut, intro, 1, 1, 1);

    introPrint.PrintFrame(introStdOut, 1);

    Sleep(2000);
    /**moving attribute field to show intro**/
    MovingAttributeField(introStdOut, intro, 11, 100);

    Sleep(5000);

    AddObject(introStdOut, introPrint.bgFrame[0], intro.area, intro.coord);







    /*******************************************************************/
    /***************************Main Scene******************************/
    /*******************************************************************/

    /**add background objects to main screen buffer**/
    wall.PrintFrame(hStdOut, 0);
    mountain.PrintFrame(hStdOut, 0);
    horizon.PrintFrame(hStdOut, 0);
    terrain.PrintFrame(hStdOut, 0);
    clouds.PrintFrame(hStdOut, 0);

    /**active screen buffer**/
    SetConsoleActiveScreenBuffer(hStdOut); //make hStdOut screen buffer active

    /**store background on hidden screen buffer before adding moving objects to main screen**/
    HANDLE hiddenStdOut = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL); //create new handle for hidden screen buffer
    SetConsoleScreenBufferSize(hiddenStdOut, (COORD) {numX * 1.5, numY * 1.5}); //Set screen buffer size
    CHAR_INFO *backGround = new CHAR_INFO[screenSize.X * screenSize.Y];
    ReadInScreenBackGround(hStdOut, backGround, screenSize);
    AddObject(hiddenStdOut, backGround, screenSize, screenCoord);





    /**declare and initialize print lightning**/
    PrintFrames printLightning;
    printLightning.ReadInScreenBackGround(hiddenStdOut, backGround, screenSize);

    Sleep(4000);

    /**lightning strikes**/
    printLightning.StoreData(3, lightning);
    printLightning.DefineBGFramesPrintFrames();
    printLightning.InitializeBGFrames(hStdOut, 8);
    printLightning.InitializePrintFrames(hStdOut, lightning, 0, 0, 2);

    //first lightning strike
    printLightning.NoMove(hStdOut, lightning, 150);
    Sleep(50);
    AddObject(hStdOut, printLightning.bgFrame[0], lightning.area, lightning.coord);

    //second lightning strike
    printLightning.InitializePrintFrames(hStdOut, lightning, 3, 3, 5);

    Sleep(1500);

    printLightning.NoMove(hStdOut, lightning, 150);
    Sleep(50);
    AddObject(hStdOut, printLightning.bgFrame[0], lightning.area, lightning.coord);







    /**declare and initialize print class**/
    PrintFrames printSmallDragon;
    printSmallDragon.ReadInScreenBackGround(hiddenStdOut, backGround, screenSize);

    Sleep(3500);
    /**small dragon flies across horizon**/
    printSmallDragon.StoreData(130, smallDragon);
    printSmallDragon.DefineBGFramesPrintFrames();
    printSmallDragon.InitializeBGFrames(hiddenStdOut, 3);
    printSmallDragon.InitializePrintFrames(hStdOut, smallDragon, 0, 0, 3);

    printSmallDragon.MoveRight(hStdOut, smallDragon, 100);







    /**declare and initialize print class**/
    PrintFrames printDeadArmy;
    //read hidden screen buffer before adding moving objects to main screen buffer
    printDeadArmy.ReadInScreenBackGround(hiddenStdOut, backGround, screenSize); //pull from same background

    /**dead army marches on wall**/
    //initialize dead army frames
    printDeadArmy.StoreData(68, deadArmy);
    printDeadArmy.DefineBGFramesPrintFrames();
    printDeadArmy.InitializeBGFrames(hiddenStdOut, 7);
    printDeadArmy.InitializeBGFramesPrintFrames(hStdOut, deadArmy, 0, 0, 0);

    printDeadArmy.MoveLeft(hStdOut, deadArmy, 250);







    /**reinitialize hidden background screen**/
    backGround = new CHAR_INFO[screenSize.X * screenSize.Y];
    ReadInScreenBackGround(hStdOut, backGround, screenSize);
    AddObject(hiddenStdOut, backGround, screenSize, screenCoord);





    /**declare/initialize print class objects**/
    PrintFrames printDragon;
    //read hidden screen buffer before adding moving objects to main screen buffer
    printDragon.ReadInScreenBackGround(hiddenStdOut, backGround, screenSize);

    PrintFrames printDragonFire;
    //read hidden screen buffer before adding moving objects to main screen buffer
    printDragonFire.backGround = printDragon.backGround; //pull from same background

    PrintFrames printDeadArmy1;
    printDeadArmy1.backGround = printDragon.backGround;





    Sleep(5000);
    /**dragon fly to wall**/
    //initialize dragon frames
    printDragon.StoreData(88, dragon);
    printDragon.DefineBGFramesPrintFrames();
    printDragon.InitializeBGFrames(hiddenStdOut, 7);
    printDragon.InitializePrintFrames(hStdOut, dragon, 0, 0, 3);

    printDragon.MoveLeft(hStdOut, dragon, 100);

    /**dragon flies in place before fire**/
    //initialize dragon frames
    printDragon.StoreData(15, dragon);
    printDragon.DefineBGFramesPrintFrames();
    printDragon.InitializeBGFrames(hiddenStdOut, 8);
    printDragon.InitializePrintFrames(hStdOut, dragon, 1, 0, 3);

    printDragon.NoMove(hStdOut, dragon, 100); //noMove initialize BGFrame with 8 direction

    /**dragon breath fire**/
    //initialize dragon frames
    printDragon.StoreData(30, dragon);
    printDragon.DefineBGFramesPrintFrames();
    printDragon.InitializeBGFrames(hiddenStdOut, 8);
    printDragon.InitializePrintFrames(hStdOut, dragon, 1, 0, 3);

    //initialize dragon fire frames
    printDragonFire.StoreData(30, dragonFire);
    printDragonFire.DefineBGFramesPrintFrames();
    printDragonFire.InitializeBGFrames(hiddenStdOut, 8);
    printDragonFire.InitializePrintFrames(hStdOut, dragonFire, 0, 2, 3);

    //dragon breaths fire**/
    TwoFramesNoMove(hStdOut, printDragon, printDragonFire, 100);





    /**add melted wall to hidden screen buffer and copy buffer to BGFrames**/
    wall.PrintFrame(hiddenStdOut, 1); //add melted wall to hidden screen buffer
    printDragon.ReadInScreenBackGround(hiddenStdOut, backGround, screenSize);
    printDragonFire.backGround = printDragon.backGround;
    wall.PrintFrame(hStdOut, 1); //add melted wall to main screen buffer

    /**wall melts a little bit as dragon breaths fire on it**/
    //initialize dragon frames
    printDragon.StoreData(30, dragon);
    printDragon.DefineBGFramesPrintFrames();
    printDragon.InitializeBGFrames(hiddenStdOut, 8);
    printDragon.InitializePrintFrames(hStdOut, dragon, 0, 0, 3);

    //initialize dragon fire frames
    printDragonFire.StoreData(30, dragonFire);
    printDragonFire.DefineBGFramesPrintFrames();
    printDragonFire.InitializeBGFrames(hiddenStdOut, 8);
    printDragonFire.InitializePrintFrames(hStdOut, dragonFire, 0, 2, 3);

    //dragon breaths fire**/
    TwoFramesNoMove(hStdOut, printDragon, printDragonFire, 100);






    /**add melted wall to hidden screen buffer and copy buffer to BGFrames**/
    wall.PrintFrame(hiddenStdOut, 2); //add melted wall to hidden screen buffer
    printDragon.ReadInScreenBackGround(hiddenStdOut, backGround, screenSize);
    printDragonFire.backGround = printDragon.backGround;
    wall.PrintFrame(hStdOut, 2); //add melted wall to main screen buffer

    /**wall melts more as dragon breaths fire on it**/
    //initialize dragon frames
    printDragon.StoreData(30, dragon);
    printDragon.DefineBGFramesPrintFrames();
    printDragon.InitializeBGFrames(hiddenStdOut, 8);
    printDragon.InitializePrintFrames(hStdOut, dragon, 3, 0, 3);

    //initialize dragon fire frames
    printDragonFire.StoreData(30, dragonFire);
    printDragonFire.DefineBGFramesPrintFrames();
    printDragonFire.InitializeBGFrames(hiddenStdOut, 8);
    printDragonFire.InitializePrintFrames(hStdOut, dragonFire, 0, 2, 3);

    //dragon breaths fire**/
    TwoFramesNoMove(hStdOut, printDragon, printDragonFire, 100);






    /**add melted wall to hidden screen buffer and copy buffer to BGFrames**/
    wall.PrintFrame(hiddenStdOut, 3); //add melted wall to hidden screen buffer
    printDragon.ReadInScreenBackGround(hiddenStdOut, backGround, screenSize);
    printDragonFire.backGround = printDragon.backGround;
    wall.PrintFrame(hStdOut, 3); //add melted wall to main screen buffer

    /**wall melts more as dragon breaths fire on it**/
    //initialize dragon frames
    printDragon.StoreData(20, dragon);
    printDragon.DefineBGFramesPrintFrames();
    printDragon.InitializeBGFrames(hiddenStdOut, 8);
    printDragon.InitializePrintFrames(hStdOut, dragon, 2, 0, 3);

    //initialize dragon fire frames
    printDragonFire.StoreData(20, dragonFire);
    printDragonFire.DefineBGFramesPrintFrames();
    printDragonFire.InitializeBGFrames(hiddenStdOut, 8);
    printDragonFire.InitializePrintFrames(hStdOut, dragonFire, 0, 2, 3);

    //dragon breaths fire**/
    TwoFramesNoMove(hStdOut, printDragon, printDragonFire, 100);




    /**dragon flies over wall**/
    AddObject(hStdOut, printDragonFire.bgFrame[0], dragonFire.area, dragonFire.coord); //clear fire

    //initialize dragon frames
    printDragon.StoreData(20, dragon);
    printDragon.DefineBGFramesPrintFrames();
    printDragon.InitializeBGFrames(hiddenStdOut, 8);
    printDragon.InitializePrintFrames(hStdOut, dragon, 3, 0, 3);

    printDragon.NoMove(hStdOut, dragon, 100); //fly in place: 20 frames

    //fly over wall
    //initialize dragon frames
    printDragon.StoreData(60, dragon);
    printDragon.DefineBGFramesPrintFrames();
    printDragon.InitializeBGFrames(hiddenStdOut, 7);
    printDragon.InitializePrintFrames(hStdOut, dragon, 0, 0, 3);

    printDragon.MoveLeft(hStdOut, dragon, 100);




    Sleep(2000);
    /**dead army continue marches on wall**/
    //initialize dead army frames
    printDeadArmy.StoreData(15, deadArmy);
    printDeadArmy.DefineBGFramesPrintFrames();
    printDeadArmy.InitializeBGFrames(hiddenStdOut, 7);
    printDeadArmy.InitializeBGFramesPrintFrames(hStdOut, deadArmy, 0, 0, 0);

    printDeadArmy.MoveLeft(hStdOut, deadArmy, 250);




    /**reinitialize hidden background screen**/
    backGround = new CHAR_INFO[screenSize.X * screenSize.Y];
    ReadInScreenBackGround(hStdOut, backGround, screenSize);
    AddObject(hiddenStdOut, backGround, screenSize, screenCoord);

    /**dead army1 continue marching on wall**/
    printDeadArmy1.StoreData(15, deadArmy1);
    printDeadArmy1.DefineBGFramesPrintFrames();
    printDeadArmy1.InitializeBGFrames(hiddenStdOut, 8);
    printDeadArmy1.InitializeBGFramesPrintFrames(hStdOut, deadArmy1, 0, 0, 14);

    printDeadArmy1.NoMove(hStdOut, deadArmy1, 500);







    Sleep(3000);
    /**lightning strikes**/
    printLightning.InitializePrintFrames(hStdOut, lightning, 0, 0, 2);

    //first lightning strike
    printLightning.NoMove(hStdOut, lightning, 150);
    Sleep(50);
    AddObject(hStdOut, printLightning.bgFrame[0], lightning.area, lightning.coord);

    //second lightning strike
    printLightning.InitializePrintFrames(hStdOut, lightning, 3, 3, 5);

    Sleep(1500);

    printLightning.NoMove(hStdOut, lightning, 150);
    Sleep(50);
    AddObject(hStdOut, printLightning.bgFrame[0], lightning.area, lightning.coord);

    Sleep(2000);



    /*****************************************************************/
    /**************************Exit Screen****************************/
    /*****************************************************************/

    /**exit screen**/
    SetConsoleActiveScreenBuffer(introStdOut); //make intro screen buffer active

    /**add second intro to intro screen buffer**/
    introPrint.InitializePrintFrames(introStdOut, intro, 2, 2, 2);

    introPrint.PrintFrame(introStdOut, 2);

    Sleep(1000);
    /**moving attribute field to show intro**/
    MovingAttributeField(introStdOut, intro, 11, 100);




    Sleep(500000);




    return 0;
}


