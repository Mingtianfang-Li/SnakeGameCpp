#include <iostream>
#include "raylib.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::string name = "Snake Game";
    const char* title = name.c_str();
    InitWindow(750, 750, title);
    while (!WindowShouldClose()) {
        // Update and draw
        BeginDrawing();
        ClearBackground(LIME);
        DrawText("Snake Game", 500, 725, 20, LIGHTGRAY);
        EndDrawing();
    }

    // De-Initialization
    CloseWindow();
    return 0;
}
