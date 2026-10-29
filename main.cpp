#include <iostream>
#include <conio.h>
#include <windows.h>
#include "items/Player.h"
#include "config/WindowsConfig.h"

int main() {
    WindowsConfig::hideCursor();

    int x = 10; // Posición horizontal inicial
    int y = 5;  // Posición vertical inicial
    char tecla;

    bool jugando = true;

    while (jugando) {
        system("cls");

        for (int i = 0; i < y; i++) {
            std::cout << "\n";
        }

        for (int i = 0; i < x; i++) {
            std::cout << " ";
        }

        Player::getDefaultPlayerSpreat();

        tecla = _getch();

        if (tolower(tecla) == 'w') y--;
        if (tolower(tecla) == 's') y++;
        if (tolower(tecla) == 'a') x--;
        if (tolower(tecla) == 'd') x++;
        else if (tecla == 0 || tecla == -32 || tecla == 224) {
            char flecha = _getch();

            if (flecha == 72) y--;
            else if (flecha == 80) y++;
            else if (flecha == 75) x--;
            else if (flecha == 77) x++;
        }

        if (tolower(tecla) == 'q') {
            WindowsConfig::showCursor();
            jugando = false;
        }
    }

    return 0;
}