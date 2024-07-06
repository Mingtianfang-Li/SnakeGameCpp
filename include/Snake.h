//
// Created by Ree Li on 7/5/2024.
//

#ifndef SNAKE_H
#define SNAKE_H
#include <deque>

#include "raylib.h"


class Snake {
private:
    int size;
    int direction;
    std::deque<Vector2> body;
    int bodyWidth;

public:
    int start_x;
    int start_y;
    Vector2 currentHeadPostion{};

    Snake(int start_x, int start_y);

    void Draw();

    void Grow();

    bool CollsionBody();

    void UpdateSnake(Vector2 newHead);

    void EraseSegment(Vector2 segement);

    Vector2 GetCurrentHeadPostion();

};



#endif //SNAKE_H
