//
// Created by Ree Li on 7/5/2024.
//

#include <raylib.h>

#include "GameBoard.h"

GameBoard::GameBoard(int width, int height) : width(width), height(height){
}

void GameBoard::Draw() {
    ClearBackground(LIME);

    // Set the margin size
    int margin = width / 16;

    // Calculate the starting position (top-left corner of the rectangle)
    int start_x = margin;
    int start_y = margin;

    // Calculate the width and height of the rectangle
    int rect_width = width - 2 * margin;
    int rect_height = height - 2 * margin;

    // Draw the rectangle with the calculated dimensions
    DrawRectangle(start_x, start_y, rect_width, rect_height, GRAY);
}
