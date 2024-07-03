//
// Created by 74559 on 7/3/2024.
//

#include "ScoreBoard.h"

#include <string>

#include "raylib.h"

ScoreBoard::ScoreBoard(int width, int height) : width(width), height(height) {
}

void ScoreBoard::Draw() {
    float scoreBoard_x = static_cast<float>(width) / 2 + (static_cast<float>(width) / 32);
    float scoreBoardWidth = static_cast<float>(width) / 2 - static_cast<float>(width) / 16;
    float scoreBoard_y = static_cast<float>(height) / 64;
    float scoreBoardHeight = static_cast<float>(height) - 4 * scoreBoard_y;
    Rectangle rec = {scoreBoard_x, scoreBoard_y, scoreBoardWidth, scoreBoardHeight};
    DrawRectangleLinesEx(rec, 10, RED);
    std::string scoreBoard = "Score Board";
    const char* scoreBoardTitle = scoreBoard.c_str();
    int frontSize = static_cast<int>(scoreBoardWidth) / 8;
    int title_x = static_cast<int>(scoreBoard_x) + frontSize / 2;
    int title_y = static_cast<int>(scoreBoard_y) + frontSize / 4;
    DrawText(scoreBoardTitle, title_x, title_y, frontSize, RED);
    DrawText("Snake Game", frontSize, height - frontSize, frontSize, LIGHTGRAY);
}
