#include <iostream>
#include <windows.h>
using namespace std;

/*
    CHAR_INFO .Attribute color codes:

    0   BLACK
    1   BLUE
    2   GREEN
    3   CYAN
    4   RED
    5   MAGENTA
    6   BROWN
    7   LIGHTGRAY
    8   DARKGRAY
    9   LIGHTBLUE
    10  LIGHTGREEN
    11  LIGHTCYAN
    12  LIGHTRED
    13  LIGHTMAGENTA
    14  YELLOW
    15  WHITE
*/

void FillDragon0(ObjectClass objectClass, int arrIndex)
{
    string object7 = "                  ";
    string object6 = "     \\'\\'-._      ";
    string object5 = "      \\ )|/_'-.   ";
    string object4 = "  _,-._;/.-'-'    ";
    string object3 = " '--'._'/''-.__   ";
    string object2 = "       '--,,..--' "; //x = 18, y = 8
    string object1 = "                  ";
    string object0 = "                  ";

    string object;
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDragon1(ObjectClass objectClass, int arrIndex)
{
    string object7 = "                  ";
    string object6 = "                  ";
    string object5 = "                  ";
    string object4 = "  _,-._ _         ";
    string object3 = " '--'._;,-.;.__   ";
    string object2 = "       '--,,..--' ";
    string object1 = "                  ";
    string object0 = "                  ";

    string object;
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDragon2(ObjectClass objectClass, int arrIndex)
{
    string object7 = "                  ";
    string object6 = "                  ";
    string object5 = "                  ";
    string object4 = "  _,-._ _         ";
    string object3 = " '--'._;;''-.__   ";
    string object2 = "     / ;';',..--' ";
    string object1 = "    /,/_.-'       ";
    string object0 = "                  ";

    string object;
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDragonFire0(ObjectClass objectClass, int arrIndex)
{
    string object4 = "                 ";
    string object3 = "                 ";
    string object2 = "           _' :- ";
    string object1 = "                 "; //x = 17, y = 5
    string object0 = "                 ";

    string object;
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDragonFire1(ObjectClass objectClass, int arrIndex)
{
    string object4 = "                 ";
    string object3 = "        . _      ";
    string object2 = "       ' , _' :- ";
    string object1 = "       '- '      "; //x = 17, y = 5
    string object0 = "                 ";

    string object;
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDragonFire2(ObjectClass objectClass, int arrIndex)
{
    string object4 = "                 ";
    string object3 = "  .,'.,,. _      ";
    string object2 = " :,.'.,',,-_' :- ";
    string object1 = "  ';-,',-,'      "; //x = 17, y = 5
    string object0 = "                 ";

    string object;
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDragonFire3(ObjectClass objectClass, int arrIndex)
{
    string object4 = "                 ";
    string object3 = "  ,.-,.., _      ";
    string object2 = " ;:,.,',''_-, :- ";
    string object1 = "  '',',','.      "; //x = 17, y = 5
    string object0 = "                 ";

    string object;
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillSmallDragon0(ObjectClass objectClass, int arrIndex)
{
    string object2 = "   /  "; //x = 6, y = 3
    string object1 = " -==^ ";
    string object0 = "      ";

    string object;
    object.append(object2);
    object.append(object1);
    object.append(object0);


    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillSmallDragon1(ObjectClass objectClass, int arrIndex)
{
    string object2 = "      ";
    string object1 = " -==^ ";
    string object0 = "      ";

    string object;
    object.append(object2);
    object.append(object1);
    object.append(object0);


    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillSmallDragon2(ObjectClass objectClass, int arrIndex)
{
    string object2 = "      ";
    string object1 = " -==^ ";
    string object0 = "   \\  ";

    string object;
    object.append(object2);
    object.append(object1);
    object.append(object0);


    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy0(ObjectClass objectClass, int arrIndex)
{
   string object11 = "    IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII"; //x = 50, y = 12
   string object10 = "    IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    string object9 = "    IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    string object8 = "   IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    string object7 = "   IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    string object6 = "  IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    string object5 = "  IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    string object4 = "   IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    string object3 = "   IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    string object2 = "    IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    string object1 = "    IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    string object0 = "    IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy1(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                             "; //X = 29, Y = 12
   string object10 = "                             ";
    string object9 = "                             ";
    string object8 = "                             ";
    string object7 = "                           I ";
    string object6 = "                          I  ";
    string object5 = "                          I  ";
    string object4 = "                           I ";
    string object3 = "                           I ";
    string object2 = "                           II";
    string object1 = "                           II";
    string object0 = "                            I";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy2(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                             "; //X = 29, Y = 12
   string object10 = "                            I";
    string object9 = "                            I";
    string object8 = "                           I ";
    string object7 = "                          II ";
    string object6 = "                         II  ";
    string object5 = "                         II  ";
    string object4 = "                         III ";
    string object3 = "                         III ";
    string object2 = "                         IIII";
    string object1 = "                         IIII";
    string object0 = "                          III";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy3(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                            I"; //X = 29, Y = 12
   string object10 = "                           II";
    string object9 = "                           II";
    string object8 = "                          II ";
    string object7 = "                         III ";
    string object6 = "                        III  ";
    string object5 = "                        III  ";
    string object4 = "                       IIIII ";
    string object3 = "                       IIIII ";
    string object2 = "                       IIIIII";
    string object1 = "                       IIIIII";
    string object0 = "                        IIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy4(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                           II"; //X = 29, Y = 12
   string object10 = "                          III";
    string object9 = "                         IIII";
    string object8 = "                         III ";
    string object7 = "                        IIII ";
    string object6 = "                      IIIII  ";
    string object5 = "                      IIIII  ";
    string object4 = "                     IIIIIII ";
    string object3 = "                     IIIIIII ";
    string object2 = "                     IIIIIIII";
    string object1 = "                    IIIIIIIII";
    string object0 = "                     IIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy5(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                          III"; //X = 29, Y = 12
   string object10 = "                         IIII";
    string object9 = "                        IIIII";
    string object8 = "                        IIII ";
    string object7 = "                       IIIII ";
    string object6 = "                     IIIIII  ";
    string object5 = "                    IIIIIII  ";
    string object4 = "                   IIIIIIIII ";
    string object3 = "                   IIIIIIIII ";
    string object2 = "                  IIIIIIIIIII";
    string object1 = "                 IIIIIIIIIIII";
    string object0 = "                  IIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy6(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                        IIIII"; //X = 29, Y = 12
   string object10 = "                       IIIIII";
    string object9 = "                      IIIIIII";
    string object8 = "                      IIIIII ";
    string object7 = "                     IIIIIII ";
    string object6 = "                   IIIIIIII  ";
    string object5 = "                  IIIIIIIII  ";
    string object4 = "                 IIIIIIIIIII ";
    string object3 = "                 IIIIIIIIIII ";
    string object2 = "                IIIIIIIIIIIII";
    string object1 = "               IIIIIIIIIIIIII";
    string object0 = "              IIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy7(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                        IIIII"; //X = 29, Y = 12
   string object10 = "                       IIIIII";
    string object9 = "                      IIIIIII";
    string object8 = "                      IIIIII ";
    string object7 = "                     IIIIIII ";
    string object6 = "                IIIIIIIIIII  ";
    string object5 = "                 IIIIIIIIII  ";
    string object4 = "                 IIIIIIIIIII ";
    string object3 = "                 IIIIIIIIIII ";
    string object2 = "                IIIIIIIIIIIII";
    string object1 = "               IIIIIIIIIIIIII";
    string object0 = "              IIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy8(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                        IIIII"; //X = 29, Y = 12
   string object10 = "                       IIIIII";
    string object9 = "                      IIIIIII";
    string object8 = "                      IIIIII ";
    string object7 = "              I      IIIIIII ";
    string object6 = "              IIIIIIIIIIIII  ";
    string object5 = "                IIIIIIIIIII  ";
    string object4 = "                 IIIIIIIIIII ";
    string object3 = "                 IIIIIIIIIII ";
    string object2 = "                IIIIIIIIIIIII";
    string object1 = "               IIIIIIIIIIIIII";
    string object0 = "              IIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy9(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                        IIIII"; //X = 29, Y = 12
   string object10 = "             II        IIIIII";
    string object9 = "            III       IIIIIII";
    string object8 = "            III       IIIIII ";
    string object7 = "            III      IIIIIII ";
    string object6 = "             IIIIIIIIIIIIII  ";
    string object5 = "              IIIIIIIIIIIII  ";
    string object4 = "                 IIIIIIIIIII ";
    string object3 = "                 IIIIIIIIIII ";
    string object2 = "                IIIIIIIIIIIII";
    string object1 = "               IIIIIIIIIIIIII";
    string object0 = "              IIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy10(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                        IIIII"; //X = 29, Y = 12
   string object10 = "           IIII        IIIIII";
    string object9 = "          IIIII       IIIIIII";
    string object8 = "          IIIII       IIIIII ";
    string object7 = "          IIIII      IIIIIII ";
    string object6 = "             IIIIIIIIIIIIII  ";
    string object5 = "              IIIIIIIIIIIII  ";
    string object4 = "                 IIIIIIIIIII ";
    string object3 = "                 IIIIIIIIIII ";
    string object2 = "                IIIIIIIIIIIII";
    string object1 = "               IIIIIIIIIIIIII";
    string object0 = "              IIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy11(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                        IIIII"; //X = 29, Y = 12
   string object10 = "         IIIIII        IIIIII";
    string object9 = "        IIIIIII       IIIIIII";
    string object8 = "        IIIIIII       IIIIII ";
    string object7 = "        IIIIIII      IIIIIII ";
    string object6 = "             IIIIIIIIIIIIII  ";
    string object5 = "              IIIIIIIIIIIII  ";
    string object4 = "                 IIIIIIIIIII ";
    string object3 = "                 IIIIIIIIIII ";
    string object2 = "                IIIIIIIIIIIII";
    string object1 = "               IIIIIIIIIIIIII";
    string object0 = "              IIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy12(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                        IIIII"; //X = 29, Y = 12
   string object10 = "       IIIIIIII        IIIIII";
    string object9 = "      IIIIIIIII       IIIIIII";
    string object8 = "      IIIIIIIII       IIIIII ";
    string object7 = "      IIIIIIIII      IIIIIII ";
    string object6 = "      I      IIIIIIIIIIIIII  ";
    string object5 = "              IIIIIIIIIIIII  ";
    string object4 = "                 IIIIIIIIIII ";
    string object3 = "                 IIIIIIIIIII ";
    string object2 = "                IIIIIIIIIIIII";
    string object1 = "               IIIIIIIIIIIIII";
    string object0 = "              IIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy13(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                        IIIII"; //X = 29, Y = 12
   string object10 = "     IIIIIIIIII        IIIIII";
    string object9 = "    IIIIIIIIIII       IIIIIII";
    string object8 = "    IIIIIIIIIII       IIIIII ";
    string object7 = "    IIIIIIIIIII      IIIIIII ";
    string object6 = "    III      IIIIIIIIIIIIII  ";
    string object5 = "    II        IIIIIIIIIIIII  ";
    string object4 = "                 IIIIIIIIIII ";
    string object3 = "                 IIIIIIIIIII ";
    string object2 = "                IIIIIIIIIIIII";
    string object1 = "               IIIIIIIIIIIIII";
    string object0 = "              IIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy14(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                        IIIII"; //X = 29, Y = 12
   string object10 = "   IIIIIIIIIIII        IIIIII";
    string object9 = "  IIIIIIIIIIIII       IIIIIII";
    string object8 = "  IIIIIIIIIIIII       IIIIII ";
    string object7 = "  IIIIIIIIIIIII      IIIIIII ";
    string object6 = "  IIIII      IIIIIIIIIIIIII  ";
    string object5 = "  IIII        IIIIIIIIIIIII  ";
    string object4 = "   II            IIIIIIIIIII ";
    string object3 = "   I             IIIIIIIIIII ";
    string object2 = "                IIIIIIIIIIIII";
    string object1 = "               IIIIIIIIIIIIII";
    string object0 = "              IIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillDeadArmy15(ObjectClass objectClass, int arrIndex)
{
   string object11 = "                        IIIII"; //X = 29, Y = 12
   string object10 = " IIIIIIIIIIIIII        IIIIII";
    string object9 = "IIIIIIIIIIIIIII       IIIIIII";
    string object8 = "IIIIIIIIIIIIIII       IIIIII ";
    string object7 = "IIIIIIIIIIIIIII      IIIIIII ";
    string object6 = "IIIIIII      IIIIIIIIIIIIII  ";
    string object5 = "IIIIII        IIIIIIIIIIIII  ";
    string object4 = " IIII            IIIIIIIIIII ";
    string object3 = " III             IIIIIIIIIII ";
    string object2 = "  I             IIIIIIIIIIIII";
    string object1 = "               IIIIIIIIIIIIII";
    string object0 = "              IIIIIIIIIIIIIII";

    string object;
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillLightning0(ObjectClass objectClass, int arrIndex)
{
    string object6 = " /   "; //x = 5, y = 7
    string object5 = " \\   ";
    string object4 = "  \\  ";
    string object3 = "  /  ";
    string object2 = "     ";
    string object1 = "     ";
    string object0 = "     ";


    string object;
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillLightning1(ObjectClass objectClass, int arrIndex)
{
    string object6 = " /   "; //x = 5, y = 7
    string object5 = " \\   ";
    string object4 = "  \\  ";
    string object3 = "  /  ";
    string object2 = " /   ";
    string object1 = " \\   ";
    string object0 = "'.\\,'";


    string object;
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillLightning2(ObjectClass objectClass, int arrIndex)
{
    string object6 = "     "; //x = 5, y = 7
    string object5 = "     ";
    string object4 = "     ";
    string object3 = "     ";
    string object2 = "     ";
    string object1 = "     ";
    string object0 = "'. ,'";


    string object;
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillLightning3(ObjectClass objectClass, int arrIndex)
{
    string object6 = "    /"; //x = 5, y = 7
    string object5 = "   / ";
    string object4 = "  /  ";
    string object3 = "  \\  ";
    string object2 = "     ";
    string object1 = "     ";
    string object0 = "     ";


    string object;
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillLightning4(ObjectClass objectClass, int arrIndex)
{
    string object6 = "    /"; //x = 5, y = 7
    string object5 = "   / ";
    string object4 = "  /  ";
    string object3 = "  \\  ";
    string object2 = "   \\ ";
    string object1 = "   / ";
    string object0 = "',/.'";


    string object;
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillLightning5(ObjectClass objectClass, int arrIndex)
{
    string object6 = "     "; //x = 5, y = 7
    string object5 = "     ";
    string object4 = "     ";
    string object3 = "     ";
    string object2 = "     ";
    string object1 = "     ";
    string object0 = "', .'";


    string object;
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}







/**background objects**/

void FillClouds0(ObjectClass objectClass, int arrIndex)
{
    string object6 = "                      .:('  )'.   "; //x = 34, y = 7
    string object5 = "     ._              :(   .    )  ";
    string object4 = "  .-(`  )      _      '. (    .') ";
    string object3 = " :(      )) .;( );,     ' '  ) ;  ";
    string object2 = " '(    )  ))    '  )     ;_   )   ";
    string object1 = "   ' __.:' '.   )  )       (_)    ";
    string object0 = "            (__.,-'               ";


    string object;
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillTerrain0(ObjectClass objectClass, int arrIndex)
{
   string object15 = "    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"; //x = 79, y = 16
   string object14 = "      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
   string object13 = "        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
   string object12 = "            ^^^^^^^^^^^^^^^^^^^^^^^^^   ^^   ^^^^   ^^^^^^^^^^^^^^^^^^^^^^^^^^^";
   string object11 = "               ^^^^^^^^^^^^^^^^^^^^^    ^^    ^^^^^^^^^     ^^^^^^^^^^^^^^^^^^^";
   string object10 = "                 ^^^^^^^^^^^^^^^^^^^^^^^   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    string object9 = "                    ^^^^^^^^^^^^^^^^^^^^  ^^^^^^^^^^^^    ^^^^^^^^^^^^^^^^^^^^^";
    string object8 = "                      ^^^^^^^^^^^^^^^^^^     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    string object7 = "                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^     ^^^^^^^^^^^^^^^^^^^";
    string object6 = "                       ^^^^^^^^^^^^^^^^^^^^^^       ^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    string object5 = "                         ^^^^^^^^^^^^^^^^^^^^^^^^^^^       ^^^^^^^^^^^^^^^^^^^^";
    string object4 = "                       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^    ^^^^^^^^^^^^^^^^^^^^^";
    string object3 = "                        ^^^^^^^^^^^^^^^^^^^     ^^^^^^^^^^     ^^^^^^^^^^^^^^^^";
    string object2 = "                     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    string object1 = "                  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    string object0 = "              ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

    string object;
    object.append(object15);
    object.append(object14);
    object.append(object13);
    object.append(object12);
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillHorizon0(ObjectClass objectClass, int arrIndex)
{
    string object6 = "   __...,,--"; //x = 12, y = 7
    string object5 = "-'' ^  ;    ";
    string object4 = "  ^^ .'  ^^ ";
    string object3 = "  ^^ :  ^^^ ";
    string object2 = " ^^^  ^^^^  ";
    string object1 = "      ^^^^^ ";
    string object0 = "            ";


    string object;
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];

        if (objectClass.frame[arrIndex][col].Char.AsciiChar == '^')
            objectClass.frame[arrIndex][col].Attributes = 6;
        else
            objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillWall0(ObjectClass objectClass, int arrIndex) //wall before fire
{
   string object19 = "-...__             __...,,''|"; //x = 29, y = 20
   string object18 = "   ^^ ''`---....-'' ^^ .'.'|/";
   string object17 = "  ^^^  ;  ^^ ,'  ^   .'.'| | ";
   string object16 = " ^^^^.'  ^^^ ;  ^^  /.'| |/  ";
   string object15 = "     ;  ^^^   '^  .' ' | |   ";
   string object14 = " ^^  ;   ^^^^^  .'-.'| |/    ";
   string object13 = "  ^^     ^^^   .' .' | |     ";
   string object12 = "             .' .' | |'      ";
   string object11 = "           .'-.' | |/|       ";
   string object10 = "          .' .'| | | '       ";
    string object9 = "        .'   / | |/|/        ";
    string object8 = "       .'--.'  |/| /         ";
    string object7 = "      .'  .' | | |'          ";
    string object6 = "     .'   ,  | | /           ";
    string object5 = "    .'--.' | ] |/            ";
    string object4 = "   .'   .' |/| /             ";
    string object3 = "  .'  .' | | |'              ";
    string object2 = "  /---,| |.| /               ";
    string object1 = " .'   '| | |'                ";
    string object0 = ".'   / | |/                  ";

    string object;
    object.append(object19);
    object.append(object18);
    object.append(object17);
    object.append(object16);
    object.append(object15);
    object.append(object14);
    object.append(object13);
    object.append(object12);
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];

        if (objectClass.frame[arrIndex][col].Char.AsciiChar == '^')
            objectClass.frame[arrIndex][col].Attributes = 6;
        else
            objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillWall1(ObjectClass objectClass, int arrIndex) //wall part melted
{
   string object19 = "-...__             __...,,''|"; //x = 29, y = 20
   string object18 = "   ^^ ''`---....-'' ^^ .'.'|/";
   string object17 = "  ^^^  ;  ^^ ,'  ^   .'.'| | ";
   string object16 = " ^^^^.'  ^^^ ;  ^^  /.'| |/  ";
   string object15 = "     ;  ^^^   '^  .' ' | |   ";
   string object14 = " ^^  ;   ^^^^^  .'-.'| |/    ";
   string object13 = "  ^^     ^^^   .' .' | |     ";
   string object12 = "               | | | |'      ";
   string object11 = "               | | |/|       ";
   string object10 = "              /_ / | '       ";
    string object9 = "             /  /|/|/        ";
    string object8 = "       .'--.'..|/| /         ";
    string object7 = "      .'  .' | | |'          ";
    string object6 = "     .'   ,  | | /           ";
    string object5 = "    .'--.' | ] |/            ";
    string object4 = "   .'   .' |/| /             ";
    string object3 = "  .'  .' | | |'              ";
    string object2 = "  /---,| |.| /               ";
    string object1 = " .'   '| | |'                ";
    string object0 = ".'   / | |/                  ";

    string object;
    object.append(object19);
    object.append(object18);
    object.append(object17);
    object.append(object16);
    object.append(object15);
    object.append(object14);
    object.append(object13);
    object.append(object12);
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];

        if (objectClass.frame[arrIndex][col].Char.AsciiChar == '^')
            objectClass.frame[arrIndex][col].Attributes = 6;
        else
            objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillWall2(ObjectClass objectClass, int arrIndex) //wall lots melted
{
   string object19 = "-...__             __...,,''|"; //x = 29, y = 20
   string object18 = "   ^^ ''`---....-'' ^^ .'.'|/";
   string object17 = "  ^^^  ;  ^^ ,'  ^   .'.'| | ";
   string object16 = " ^^^^.'  ^^^ ;  ^^  /.'| |/  ";
   string object15 = "     ;  ^^^   '^  .' ' | |   ";
   string object14 = " ^^  ;   ^^^^^  .'-.'| |/    ";
   string object13 = "  ^^     ^^^   .' .' | |     ";
   string object12 = "               | | | |'      ";
   string object11 = "               | | |/|       ";
   string object10 = "               |_| | '       ";
    string object9 = "              '__/ |/        ";
    string object8 = "       .'--..' .'| /         ";
    string object7 = "      .'  .' |'.'|'          ";
    string object6 = "     .'   ,  | | /           ";
    string object5 = "    .'--.' | ] |/            ";
    string object4 = "   .'   .' |/| /             ";
    string object3 = "  .'  .' | | |'              ";
    string object2 = "  /---,| |.| /               ";
    string object1 = " .'   '| | |'                ";
    string object0 = ".'   / | |/                  ";

    string object;
    object.append(object19);
    object.append(object18);
    object.append(object17);
    object.append(object16);
    object.append(object15);
    object.append(object14);
    object.append(object13);
    object.append(object12);
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];

        if (objectClass.frame[arrIndex][col].Char.AsciiChar == '^')
            objectClass.frame[arrIndex][col].Attributes = 6;
        else
            objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillWall3(ObjectClass objectClass, int arrIndex) //wall part gone from fire
{
   string object19 = "-...__             __...,,''|"; //x = 29, y = 20
   string object18 = "   ^^ ''`---....-'' ^^ .'.'|/";
   string object17 = "  ^^^  ;  ^^ ,'  ^   .'.'| | ";
   string object16 = " ^^^^.'  ^^^ ;  ^^  /.'| |/  ";
   string object15 = "     ;  ^^^   '^  .' ' | |   ";
   string object14 = " ^^  ;   ^^^^^  .'-.'| |/    ";
   string object13 = "  ^^     ^^^   .' .' | |     ";
   string object12 = "               | | | |'      ";
   string object11 = "               | | |/|       ";
   string object10 = "               |_| | '       ";
    string object9 = "               |_|_|/        ";
    string object8 = "       .'--..                ";
    string object7 = "      .'  .' |               ";
    string object6 = "     .'   ,  | '.            ";
    string object5 = "    .'--.' | ] |/            ";
    string object4 = "   .'   .' |/| /             ";
    string object3 = "  .'  .' | | |'              ";
    string object2 = "  /---,| |.| /               ";
    string object1 = " .'   '| | |'                ";
    string object0 = ".'   / | |/                  ";

    string object;
    object.append(object19);
    object.append(object18);
    object.append(object17);
    object.append(object16);
    object.append(object15);
    object.append(object14);
    object.append(object13);
    object.append(object12);
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];

        if (objectClass.frame[arrIndex][col].Char.AsciiChar == '^')
            objectClass.frame[arrIndex][col].Attributes = 6;
        else
            objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillMountain0(ObjectClass objectClass, int arrIndex)
{
   string object12 = "                                      ,-;';-,.                                "; //x = 78, y = 13
   string object11 = "                                    ,' '; ; ; '.                .')           ";
   string object10 = "                                   .'*.';  ; : '.              (_  )          ";
    string object9 = "                                  /     `  '  \\  \\                            ";
    string object8 = "                                 /    |        \\  \\                           ";
    string object7 = "                                /    / \\       |   \\                          ";
    string object6 = "                           _,--'        |      \\    |                         ";
    string object5 = "                         /' _/  ^^^     \\   |    ^^  \\                        ";
    string object4 = "                      _/' /'    ^^^^     |   \\  ^^^   `-.__                   ";
    string object3 = "-,.               __/'       ,-' ^^^/    |    |     \\      `--...__           ";
    string object2 = "   '-,,         /'          /      |    / \\     \\  ^^ `-.      ^^^  `\\        ";
    string object1 = " ^^^   '--,.   /    /;;,,__-'      /   / ^^ \\     ^^^^^  \\    ^^^^^   `-..    ";
    string object0 = "  ^^ .' ^^  ''/    |;;;;;;;| __~.,   _/_ ^^^^    ^^^^^^^^    ^^^^^^^^    \\ '-,";

    string object;
    object.append(object12);
    object.append(object11);
    object.append(object10);
    object.append(object9);
    object.append(object8);
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];

        if (objectClass.frame[arrIndex][col].Char.AsciiChar == '^')
            objectClass.frame[arrIndex][col].Attributes = 6;
        else
            objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}










/**introduction frames**/

void FillIntro0(ObjectClass objectClass, int arrIndex)
{
    string object7 = "                                                                                     ";
    string object6 = "   _____                               __   _______ _                                "; //x = 85, y = 8
    string object5 = "  / ____|                             / _| |__   __| |                               ";
    string object4 = " | |  __  __ _ _ __ ___   ___    ___ | |_     | |  | |__  _ __ ___  _ __   ___  ___  ";
    string object3 = " | | |_ |/ _` | '_ ` _ \\ / _ \\  / _ \\|  _|    | |  | '_ \\| '__/ _ \\| '_ \\ / _ \\/ __| ";
    string object2 = " | |__| | (_| | | | | | |  __/ | (_) | |      | |  | | | | | | (_) | | | |  __/\\__ \\ ";
    string object1 = "  \\_____|\\__,_|_| |_| |_|\\___|  \\___/|_|      |_|  |_| |_|_|  \\___/|_| |_|\\___||___/ ";
    string object0 = "                                                                                     ";

    string object;
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillIntro1(ObjectClass objectClass, int arrIndex)
{
    string object7 = "__          ___       _              _____        _____                _             "; //x = 85, y = 8
    string object6 = "\\ \\        / (_)     | |            |_   _|      / ____|              (_)            ";
    string object5 = " \\ \\  /\\  / / _ _ __ | |_ ___ _ __    | |  ___  | |     ___  _ __ ___  _ _ __   __ _ ";
    string object4 = "  \\ \\/  \\/ / | | '_ \\| __/ _ \\ '__|   | | / __| | |    / _ \\| '_ ` _ \\| | '_ \\ / _` |";
    string object3 = "   \\  /\\  /  | | | | | ||  __/ |     _| |_\\__ \\ | |___| (_) | | | | | | | | | | (_| |";
    string object2 = "    \\/  \\/   |_|_| |_|\\__\\___|_|    |_____|___/  \\_____\\___/|_| |_| |_|_|_| |_|\\__, |";
    string object1 = "                                                                                __/ |";
    string object0 = "                                                                               |___/ ";

    string object;
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillIntro2(ObjectClass objectClass, int arrIndex)
{
    string object5 = "                                                                                 "; //x = 81, y = 6
    string object4 = "    ___|                              _| __ __| |                                ";
    string object3 = "   |      _` | __ `__ \\   _ \\   _ \\  |      |   __ \\   __| _ \\  __ \\   _ \\  __|  ";
    string object2 = "   |   | (   | |   |   |  __/  (   | __|    |   | | | |   (   | |   |  __/\\__ \\  ";
    string object1 = "  \\____|\\__,_|_|  _|  _|\\___| \\___/ _|     _|  _| |_|_|  \\___/ _|  _|\\___|____/  ";
    string object0 = "                                                                                 ";

    string object;
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillIntro3(ObjectClass objectClass, int arrIndex)
{
    string object5 = "                                                                                 "; //x = 81, y = 6
    string object4 = "\\ \\        /_)       |             _ _|        ___|                _)            ";
    string object3 = " \\ \\  \\   /  | __ \\  __|  _ \\  __|   |   __|  |      _ \\  __ `__ \\  | __ \\   _` |";
    string object2 = "  \\ \\  \\ /   | |   | |    __/ |      | \\__ \\  |     (   | |   |   | | |   | (   |";
    string object1 = "   \\_/\\_/   _|_|  _|\\__|\\___|_|    ___|____/ \\____|\\___/ _|  _|  _|_|_|  _|\\__, |";
    string object0 = "                                                                           |___/ ";

    string object;
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillIntro4(ObjectClass objectClass, int arrIndex)
{
    string object5 = "                                                                                 "; //x = 81, y = 6
    string object4 = "        \\ \\        /_)       |             _ _|       |   |                      ";
    string object3 = "         \\ \\  \\   /  | __ \\  __|  _ \\  __|   |   __|  |   |  _ \\  __| _ \\        ";
    string object2 = "          \\ \\  \\ /   | |   | |    __/ |      | \\__ \\  ___ |  __/ |    __/        ";
    string object1 = "           \\_/\\_/   _|_|  _|\\__|\\___|_|    ___|____/ _|  _|\\___|_|  \\___|        ";
    string object0 = "                                                                                 ";

    string object;
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}









/**miscellaneous frames**/

void Fire0(ObjectClass objectClass, int arrIndex)
{
    string object7 = "                                  ";
    string object6 = "                     \\'\\'-._      ";
    string object5 = "                      \\ ) /_'-.   ";
    string object4 = "   ,' , . _       _,-._; .-'-'    ";
    string object3 = " : .'. ' , _' :- '--'._   '-.__   ";
    string object2 = "  ' - ,'- '            '--,,..--' "; //x = 34, y = 8
    string object1 = "                                  ";
    string object0 = "                                  ";

    string object;
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        if ((col > 34 * 3) && (col < 34 * 3 + 17))
            objectClass.frame[arrIndex][col].Attributes = 11;
        else if ((col > 34 * 4) && (col < 34 * 4 + 17))
            objectClass.frame[arrIndex][col].Attributes = 11;
        else if ((col > 34 * 5) && (col < 34 * 5 + 17))
            objectClass.frame[arrIndex][col].Attributes = 11;
        else
            objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void Fire1(ObjectClass objectClass, int arrIndex)
{
    string object7 = "                                  ";
    string object6 = "                                  ";
    string object5 = "                                  ";
    string object4 = "   ,' , . _       _,-._ _         ";
    string object3 = " : .'. ' , _' :- '--'._;,-.;.__   ";
    string object2 = "  ' - ,'- '            '--,,..--' "; //x = 34, y = 8
    string object1 = "                                  ";
    string object0 = "                                  ";

    string object;
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        if ((col > 34 * 3) && (col < 34 * 3 + 17))
            objectClass.frame[arrIndex][col].Attributes = 11;
        else if ((col > 34 * 4) && (col < 34 * 4 + 17))
            objectClass.frame[arrIndex][col].Attributes = 11;
        else if ((col > 34 * 5) && (col < 34 * 5 + 17))
            objectClass.frame[arrIndex][col].Attributes = 11;
        else
            objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void Fire2(ObjectClass objectClass, int arrIndex)
{
    string object7 = "                                  ";
    string object6 = "                                  ";
    string object5 = "                                  ";
    string object4 = "   ,' , . _       _,-._ _         ";
    string object3 = " : .'. ' , _' :- '--'._;  '-.__   ";
    string object2 = "  ' - ,'- '          / ; ; ,..--' "; //x = 34, y = 8
    string object1 = "                    /,/_.-'       ";
    string object0 = "                                  ";

    string object;
    object.append(object7);
    object.append(object6);
    object.append(object5);
    object.append(object4);
    object.append(object3);
    object.append(object2);
    object.append(object1);
    object.append(object0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = object[col];
        if ((col > 34 * 3) && (col < 34 * 3 + 17))
            objectClass.frame[arrIndex][col].Attributes = 11;
        else if ((col > 34 * 4) && (col < 34 * 4 + 17))
            objectClass.frame[arrIndex][col].Attributes = 11;
        else if ((col > 34 * 5) && (col < 34 * 5 + 17))
            objectClass.frame[arrIndex][col].Attributes = 11;
        else
            objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillHouse(CHAR_INFO arr[])
{
    string house6 = "   __[]_ _ _ _   "; //x = 17, y = 7
    string house5 = "  /^~^~^~^~^~^\\  ";
    string house4 = " / ^ ^ ^ ^ ^ ^ \\ ";
    string house3 = "/_^_^_^_^_^_^_^_\\";
    string house2 = " |        ____ | ";
    string house1 = " | [] []  |[]| | ";
    string house0 = " |________|__|_| ";

    string house;
    house.append(house6);
    house.append(house5);
    house.append(house4);
    house.append(house3);
    house.append(house2);
    house.append(house1);
    house.append(house0);

    for (int col = 0; col < house.size(); ++col)
    {
        arr[col].Char.AsciiChar = house[col];
        arr[col].Attributes = 6;
    }
}

void FillWalkLeft0(ObjectClass objectClass, int arrIndex)
{
    //CHAR_INFO **pointer in data structure
    string stickMan9 = "     _     "; //x = 11; y = 10
    string stickMan8 = "    (\")    ";
    string stickMan7 = "    o-o    ";
    string stickMan6 = "   / | \\   ";
    string stickMan5 = "   \\ | /   ";
    string stickMan4 = "    O-O    ";
    string stickMan3 = "    / |    ";
    string stickMan2 = "   o  o    ";
    string stickMan1 = "    \\ |    ";
    string stickMan0 = "   oO O    ";

    string stickMan;
    stickMan.append(stickMan9);
    stickMan.append(stickMan8);
    stickMan.append(stickMan7);
    stickMan.append(stickMan6);
    stickMan.append(stickMan5);
    stickMan.append(stickMan4);
    stickMan.append(stickMan3);
    stickMan.append(stickMan2);
    stickMan.append(stickMan1);
    stickMan.append(stickMan0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = stickMan[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillWalkLeft1(ObjectClass objectClass, int arrIndex)
{
    string stickMan9 = "     _     "; //x = 11; y = 10
    string stickMan8 = "    { )    ";
    string stickMan7 = "     o     ";
    string stickMan6 = "     |\\    ";
    string stickMan5 = "     |/    ";
    string stickMan4 = "    OO     ";
    string stickMan3 = "    /|     ";
    string stickMan2 = "   o o     ";
    string stickMan1 = "    \\|     ";
    string stickMan0 = "    oO     ";

    string stickMan;
    stickMan.append(stickMan9);
    stickMan.append(stickMan8);
    stickMan.append(stickMan7);
    stickMan.append(stickMan6);
    stickMan.append(stickMan5);
    stickMan.append(stickMan4);
    stickMan.append(stickMan3);
    stickMan.append(stickMan2);
    stickMan.append(stickMan1);
    stickMan.append(stickMan0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = stickMan[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillWalkLeft2(ObjectClass objectClass, int arrIndex)
{
    string stickMan9 = "     _     "; //x = 11; y = 10
    string stickMan8 = "    { )    ";
    string stickMan7 = "     o     ";
    string stickMan6 = "     |\\    ";
    string stickMan5 = "    /||    ";
    string stickMan4 = "   O OO    ";
    string stickMan3 = "    /|     ";
    string stickMan2 = "   o o     ";
    string stickMan1 = "   | |     ";
    string stickMan0 = "  **oO     ";

    string stickMan;
    stickMan.append(stickMan9);
    stickMan.append(stickMan8);
    stickMan.append(stickMan7);
    stickMan.append(stickMan6);
    stickMan.append(stickMan5);
    stickMan.append(stickMan4);
    stickMan.append(stickMan3);
    stickMan.append(stickMan2);
    stickMan.append(stickMan1);
    stickMan.append(stickMan0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = stickMan[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillWalkLeft3(ObjectClass objectClass, int arrIndex)
{
    string stickMan9 = "     _     "; //x = 11; y = 10
    string stickMan8 = "    { )    ";
    string stickMan7 = "     o     ";
    string stickMan6 = "    /|\\    ";
    string stickMan5 = "   / | \\   ";
    string stickMan4 = "  O  O  O  ";
    string stickMan3 = "    /|     ";
    string stickMan2 = "   o o     ";
    string stickMan1 = "  /   \\    ";
    string stickMan0 = "oO   oO    ";

    string stickMan;
    stickMan.append(stickMan9);
    stickMan.append(stickMan8);
    stickMan.append(stickMan7);
    stickMan.append(stickMan6);
    stickMan.append(stickMan5);
    stickMan.append(stickMan4);
    stickMan.append(stickMan3);
    stickMan.append(stickMan2);
    stickMan.append(stickMan1);
    stickMan.append(stickMan0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = stickMan[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}

void FillWalkLeft4(ObjectClass objectClass, int arrIndex)
{
    string stickMan9 = "     _     "; //x = 11; y = 10
    string stickMan8 = "    { )    ";
    string stickMan7 = "     o     ";
    string stickMan6 = "     |\\    ";
    string stickMan5 = "    /||    ";
    string stickMan4 = "   O OO    ";
    string stickMan3 = "    /|     ";
    string stickMan2 = "   o o     ";
    string stickMan1 = "   |  \\    ";
    string stickMan0 = "  oO  **   ";

    string stickMan;
    stickMan.append(stickMan9);
    stickMan.append(stickMan8);
    stickMan.append(stickMan7);
    stickMan.append(stickMan6);
    stickMan.append(stickMan5);
    stickMan.append(stickMan4);
    stickMan.append(stickMan3);
    stickMan.append(stickMan2);
    stickMan.append(stickMan1);
    stickMan.append(stickMan0);

    for (int col = 0; col < objectClass.frameLength; ++col)
    {
        objectClass.frame[arrIndex][col].Char.AsciiChar = stickMan[col];
        objectClass.frame[arrIndex][col].Attributes = objectClass.color;
    }
}
