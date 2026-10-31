/*
 ? AUTHOR: Orlando Yepes Espitia
    - 30/10/2026
 */
#include "config/os/WindowsConfig.h"
#include "actions/movements/MovementRecorder.h"
#include "config/game/CollisionMargins.h"

/*
 TODO:
    - Implement Coin functionality to be able to collect coins and increase the player's score.
    - Implement a scoring system to keep track of the player's score based on the coins collected.
    - Implement a game over condition when the player collects a certain number of coins or reaches a
    - Implement margin functionality to prevent the player from moving outside the game area.
 */
int main() {
    
    WindowsConfig::hideCursor();
    CollisionMargins::getMarginSprite();

    int x = 10;
    int y = 5;
    char tecla;
    bool jugando = true;

    WindowsConfig::goToXY(x, y);
    Player::getDefaultPlayerSpreat();

    MovementRecorder::characterRecordMovement(x, y, tecla, jugando);

    return 0;
}
