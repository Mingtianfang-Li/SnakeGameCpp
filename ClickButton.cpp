//
// Created by 74559 on 7/3/2024.
//

#include "ClickButton.h"
#include "raylib.h"

ClickButton::ClickButton(int x, int y, int title_y, float width, float height, const char *title)
:x(x), y(y), title_y(title_y), width(width), height(height), title(title) {
}

void ClickButton::Draw() {
    DrawRectangle(x, y , width, height, WHITE);
    int frontSize = height/2;
    int textX = (x + title_y - frontSize)/2 + x;
    int textY = frontSize/2 + y;
    DrawText(title, textX, textY, frontSize , BLACK);
}

