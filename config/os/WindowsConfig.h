/*
 ? ABOUT THIS FILE:
    - This file contains the implementation of the WindowsConfig class.
 */
#pragma once
#include <windows.h>

class WindowsConfig {

public:
    static void hideCursor() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO cursorInfo;

        GetConsoleCursorInfo(hConsole, &cursorInfo);
        cursorInfo.bVisible = false;
        SetConsoleCursorInfo(hConsole, &cursorInfo);
    }

    static void showCursor() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO cursorInfo;

        GetConsoleCursorInfo(hConsole, &cursorInfo);
        cursorInfo.bVisible = true;
        SetConsoleCursorInfo(hConsole, &cursorInfo);
    }

    static void goToXY(int x, int y) {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD position = {(SHORT)x, (SHORT)y};
        SetConsoleCursorPosition(handle, position);
    }
};