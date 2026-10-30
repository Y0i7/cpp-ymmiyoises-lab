/*
 ?ABOUT THIS FILE:
    - This file contains the implementation of the MovementRecorder class.
    - The MovementRecorder class is used to record the movement of the player character in the game.
    - The class listens for keyboard input to move the character up, down, left, or right.
    - The class clears the console and redraws the character at the new position after each movement.
 */
#ifndef CPP_PRACTICE_MOVEMENTRECORDER_H
#define CPP_PRACTICE_MOVEMENTRECORDER_H

#include <iostream>
#include <conio.h>
#include <windows.h>
#include "../../domain/objects/Player.h"
/*
 TODO :
    - Implement a function to record the movement of the player character.
    - The function should take the current position (x, y) and a boolean indicating if the game is still running.
    - The function should listen for keyboard input to move the character up, down, left, or right.
    - The function should clear the console and redraw the character at the new position after each movement.
 */
namespace  MovementRecorder {

    /*
     ! IMPORTATN: Implement Constants for the movement limits of the character.
     */
    inline void characterRecordMovement(int x, int y, char tecla, bool jugando) {
        while (jugando) {
            system("cls");

            for (int i = 0; i < y; i++) {
                std::cout << "\n";
            }

            for (int i = 0; i < x; i++) {
                std::cout << " ";
            }

            Player::getDefaultPlayerSpreat();

            tecla = tolower(_getch());

            if (tecla == 'w') y--;
            else if (tecla == 's') y++;
            else if (tecla == 'a') x--;
            else if (tecla == 'd') x++;
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
    }
};


#endif
