#include "moveObjectClass.h"

int main(void)
{
    SetConsoleTitle(TEXT("Window Title")); //window title

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); //declare and initialize active screen buffer HANDLE
    ScreenBufferClass mainScreen(hStdOut, 120, 30);

    HANDLE introStdOut = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    ScreenBufferClass introScreen(introStdOut, mainScreen.area.X, mainScreen.area.Y);


    return 0;
}
