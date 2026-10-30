/*
 ? AUTHOR: Orlando Yepes Espitia
    - 30/10/2026
 */
#include "config/os/WindowsConfig.h"
#include "actions/movements/MovementRecorder.h"

/*
 TODO:
    - Implement Coin functionality to be able to collect coins and increase the player's score.
    - Implement a scoring system to keep track of the player's score based on the coins collected.
    - Implement a game over condition when the player collects a certain number of coins or reaches a
    - Implement margin functionality to prevent the player from moving outside the game area.
 */
int main() {
    
    WindowsConfig::hideCursor();

    int x = 10;
    int y = 5;
    char tecla;
    bool jugando = true;

    MovementRecorder::characterRecordMovement(x, y, tecla, jugando);

    return 0;
}
