//
// Created by Ree Li on 7/5/2024.
//

#include "Snake.h"

Snake::Snake(int start_x, int start_y) : start_x(start_x), start_y(start_y){
    size = 1;
    currentHeadPostion = {static_cast<float>(start_x), static_cast<float>(start_y)};
    body.push_back(currentHeadPostion);
    // width and height for 10ptx for each body fragment
    bodyWidth = 10;
}

void Snake::Draw() {
    DrawRectangle(start_x, start_y, bodyWidth, bodyWidth, BLACK);
}

void Snake::Move() {
}

void Snake::UpdateDirection() {
}

void Snake::Grow() {
    size++;
}

bool Snake::CollectionBody() {
}

void Snake::UpdateSnake() {
}
