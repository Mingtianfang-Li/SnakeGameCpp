//
// Created by 74559 on 7/3/2024.
//

#include "../include/ClickButton.h"
#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"

ClickButton::ClickButton(int x, int y, int title_y, float width, float height, const char *title)
:x(x), y(y), title_y(title_y), width(width), height(height), title(title) {
}

void ClickButton::Draw() {
    DrawRectangle(x, y , width, height, WHITE);
    int frontSize = static_cast<int>(height) / 2 ;
    int textWidth = MeasureText(title, frontSize);  // Measure text width

    // Center text within the rectangle
    int textX = x + (static_cast<int>(width) - textWidth) / 2;
    int textY = y + (static_cast<int>(height) - frontSize) / 2;
    DrawText(title, textX, textY, frontSize , BLACK);
}

