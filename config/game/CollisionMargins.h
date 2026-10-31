#pragma once
#include <iostream>
#include "../utils/Constants.h"

class CollisionMargins {
private:
    static constexpr char MARGIN_SPRITE = '#';

public:
    static void getMarginSprite() {
        // El bucle externo recorre las FILAS (Y) de arriba a abajo
        for (int y = Constants::TOP_LIMIT; y <= Constants::BOTTOM_LIMIT; ++y) {
            // El bucle interno recorre las COLUMNAS (X) de izquierda a derecha
            for (int x = Constants::LEFT_LIMIT; x <= Constants::RIGHT_LIMIT; ++x) {

                // CONDICIÓN: Si estamos en el borde superior, inferior, izquierdo o derecho
                if (y == Constants::TOP_LIMIT || y == Constants::BOTTOM_LIMIT ||
                    x == Constants::LEFT_LIMIT || x == Constants::RIGHT_LIMIT) {

                    std::cout << MARGIN_SPRITE; // Dibujamos la pared/margen
                    }
                else {
                    std::cout << " "; // Espacio vacío dentro del mapa
                }
            }

            // CRUCIAL: Cuando termina de dibujar una fila completa, saltamos a la siguiente línea
            std::cout << "\n";
        }
    }
};
