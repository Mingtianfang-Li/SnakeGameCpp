#include <iostream>

#include "GameStatus.h"
#include "raylib.h"
#include "ScoreBoard.h"
#include "StartScreen.h"

int main() {
    std::string name = "Snake Game";
    const char* title = name.c_str();
    int width = 750;
    int height = 750;
    InitWindow(width, height, title);

    // Create StartScreen and ScoreBoard objects outside the loop
    StartScreen start_screen = {width, height};
    ScoreBoard score_board = {width, height};
    GameStatus game_status = GameStatus::START_SCREEN;


    while (!WindowShouldClose()) {
        // Begin drawing
        BeginDrawing();

        start_screen.Draw(); // Draw start screen
        score_board.Draw(); // Draw score board

        //check game status
        if(game_status == GameStatus::START_SCREEN) {
            // Check for mouse clicks
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
                Vector2 mousePoint = GetMousePosition();
                std::cout << "Mouse Clicked at : (" << mousePoint.x << ", " << mousePoint.y << ")" << std::endl;
            }
        } else if (game_status == GameStatus::PLAYING) {

        } else if (game_status == GameStatus::GAME_OVER) {

        }

        EndDrawing();
    }

    // De-Initialization
    CloseWindow();
    return 0;
}
