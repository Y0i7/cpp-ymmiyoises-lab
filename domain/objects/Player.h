/*
 ? ABOUT THIS FILE:
    - This file contains the implementation of the Player class.
    - The Player class is used to represent a player in the game.
    - Each player has a name and a number of coins.
 */
#pragma once
#include <iostream>
#include <string>
#include <string_view>

class Player {

private:
    static constexpr std::string_view DEFAULT_PLAYER_SPREAT = "o";

private:
    std::string playerName;
    int playerCoins;

public:
    Player(const std::string& _playerName, int _playerCoins)
        : playerName(_playerName), playerCoins(_playerCoins) {
    }


    std::string getPlayerName() const {
        return playerName;
    }

    int getPlayerCoins() const {
        return playerCoins;
    }


    void setPlayerName(std::string_view _playerName) {
        playerName = _playerName;
    }

    void setPlayerCoins(int _playerCoins) {
        playerCoins = _playerCoins;
    }

    static void getDefaultPlayerSpreat() {
        std::cout << DEFAULT_PLAYER_SPREAT;
    }
};