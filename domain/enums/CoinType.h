#pragma once
/*
 ? ABOUT THIS FILE:
    - This file contains the implementation of the CoinType class with values GOLD, SILVER, and BRONZE.
    - The CoinType class is used to represent different types of coins in the game.
    - Each coin type has a corresponding sprite and value.
 */
/*
 TODO :
    - Create a CoinType class to implement with values GOLD, SILVER, and BRONZE.
 */
enum class CoinType {
    GOLD,
    SILVER,
    BRONZE
};
/*
 !IMPORTANT: Implementation of CoinType class with values GOLD, SILVER, and BRONZE.
 */
inline char getCoinSprite(CoinType coinType) {
    switch (coinType) {
        case CoinType::GOLD:    return '@';
        case CoinType::SILVER:  return '*';
        case CoinType::BRONZE:  return '+';
        default:    return '?';
    }
}
/*
 !IMPORTANT: Implementation of CoinType class with values GOLD, SILVER, and BRONZE.
 */
inline int getCoinValue(CoinType coinType) {
    switch (coinType) {
        case CoinType::GOLD:    return 10;
        case CoinType::SILVER:  return 5;
        case CoinType::BRONZE:  return 1;
        default:    return 0;
    }
}

