//
// Created by Ree Li on 7/5/2024.
//

#include "Snake.h"

#include <iostream>
#include <thread>

#include "raymath.h"

Snake::Snake(int start_x, int start_y) : start_x(start_x), start_y(start_y){
    size = 1;
    currentHeadPostion = {static_cast<float>(start_x), static_cast<float>(start_y)};
    body.push_back(currentHeadPostion);
    // width and height for 10ptx for each body fragment
    bodyWidth = 20;
    direction = 0;
}

void Snake::Draw() {
    // DrawRectangle(start_x, start_y, bodyWidth, bodyWidth, BLACK);
    // DrawRectangle(start_x + 1 * bodyWidth, start_y, bodyWidth, bodyWidth, BLACK);
    // DrawRectangle(start_x , start_y - 1 * bodyWidth, bodyWidth, bodyWidth, BLACK);
    for (unsigned int i = 0; i < body.size(); i++) {
        DrawRectangle(body[i].x, body[i].y, bodyWidth, bodyWidth, BLACK);
    }

}

// void Snake::Move() {
//     // speed is 10ptx
//     float speed = 10;
//     std:: cout << "direction is " << direction;
//     // move up down left right from the head
//     float headX = currentHeadPostion.x;
//     float headY = currentHeadPostion.y;
//
//     if (direction == 0) {
//         headY += speed;
//     } else if (direction == 1) {
//         headY -= speed;
//     } else if (direction == 2) {
//         headX -= speed;
//     } else if (direction == 3) {
//         headX += speed;
//     }
//     std :: cout << "updated: " << headX << " " << headY;
//     Vector2 newHead = {headX, headY};
//     // call update snake with new current Headposition
//     // UpdateSnake(newHead);
//     std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//     std :: cout << "waited";
// }
//
// void Snake::UpdateDirection() {
//     // Based on user Input to determine the move
     // if (IsKeyPressed(KEY_UP) && direction != 1) {
     //     direction = 0;
     // } else if (IsKeyPressed(KEY_DOWN) && direction != 0) {
     //     direction = 1;
     // } else if (IsKeyPressed(KEY_LEFT) && direction != 3) {
     //     direction = 2;
     // } else if (IsKeyPressed(KEY_RIGHT) && direction != 2) {
     //     direction = 3;
     // }
// }

void Snake::Grow() {
    size++;
}

bool Snake::CollsionBody() {
}

void Snake::UpdateSnake(Vector2 newHead) {
    DrawRectangle(static_cast<int>(newHead.x), static_cast<int>(newHead.y), bodyWidth, bodyWidth, BLACK);
    int bodySize = body.size();
    if (bodySize == size && !body.empty()) {
        Vector2 tail = body.back();
        body.pop_back();
        EraseSegment(tail);
    }
}

void Snake::EraseSegment(Vector2 segment) {
    DrawRectangle(static_cast<int>(segment.x), static_cast<int>(segment.y), bodyWidth, bodyWidth, GRAY);
}

Vector2 Snake::GetCurrentHeadPostion() {
    return currentHeadPostion;
}
