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

#include "../../config/utils/Constants.h"
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
    inline void characterRecordMovement(int currentPositionX, int currentPositionY, char tecla, bool jugando) {
        while (jugando) {
            if (_kbhit()) {

                tecla = tolower(_getch());

                WindowsConfig::goToXY(currentPositionX, currentPositionY);
                std::cout << " ";

                int nextPositionX = currentPositionX;
                int nextPositionY = currentPositionY;

                if (tecla == 'w') nextPositionY--;
                else if (tecla == 's') nextPositionY++;
                else if (tecla == 'a') nextPositionX--;
                else if (tecla == 'd') nextPositionX++;
                else if (tecla == 0 || tecla == -32 || tecla == 224) {
                    char flecha = _getch();

                    if (flecha == 72) nextPositionY--;
                    else if (flecha == 80) nextPositionY++;
                    else if (flecha == 75) nextPositionX--;
                    else if (flecha == 77) nextPositionX++;
                }

                if (tolower(tecla) == 'q') {
                    WindowsConfig::showCursor();
                    jugando = false;
                }

                if (nextPositionX > Constants::LEFT_LIMIT && nextPositionX < Constants::RIGHT_LIMIT)
                    currentPositionX = nextPositionX;

                if (nextPositionY > Constants::TOP_LIMIT && nextPositionY < Constants::BOTTOM_LIMIT)
                    currentPositionY = nextPositionY;

                WindowsConfig::goToXY(currentPositionX, currentPositionY);
                Player::getDefaultPlayerSpreat();
            }

        }
    }
};


#endif
