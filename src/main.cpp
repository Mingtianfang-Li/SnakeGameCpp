#include <iostream>

#include "GameStatus.h"
#include "raylib.h"
#include "ScoreBoard.h"
#include "MenuScreen.h"
#include "Game.h"

bool checkBoundred(float mou_x, float mou_y, MenuScreen screen, const std::string& title);
std::string start = "Start";
std::string exitText = "Exit";
std::string restart = "Restart";

int main() {
    std::string name = "Snake Game";
    const char* title = name.c_str();
    int width = 750;
    int height = 750;
    InitWindow(width, height, title);

    // Create StartScreens and ScoreBoard objects
    MenuScreen start_screen = {width, height, start.c_str() , exitText.c_str()};
    MenuScreen game_over_screen = {width, height, restart.c_str(), exitText.c_str()};
    ScoreBoard score_board = {width, height};
    Game game = {width, height};
    GameStatus game_status = GameStatus::START_SCREEN;
    int direction = 0;

    float moveInterval = 0.5f; // Move interval in seconds
    float lastMoveTime = GetTime(); // Time of the last move


    while (!WindowShouldClose()) {
        // Begin drawing
        BeginDrawing();

        //check game status
        if(game_status == GameStatus::START_SCREEN) {
            start_screen.Draw(); // Draw start screen
            score_board.Draw(); // Draw score board
            // Check for mouse clicks
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
                Vector2 mousePoint = GetMousePosition();
                if (checkBoundred(mousePoint.x, mousePoint.y, start_screen, start)) {
                    game_status = GameStatus::PLAYING;
                } else if (checkBoundred(mousePoint.x, mousePoint.y, start_screen, exitText)) {
                    CloseWindow();
                    return 0;
                }
            }
        } else if (game_status == GameStatus::PLAYING) {
            game.Play();
            if (IsKeyPressed(KEY_UP) && direction != 1) {
                direction = 0;
            } else if (IsKeyPressed(KEY_DOWN) && direction != 0) {
                direction = 1;
            } else if (IsKeyPressed(KEY_LEFT) && direction != 3) {
                direction = 2;
            } else if (IsKeyPressed(KEY_RIGHT) && direction != 2) {
                direction = 3;
            }
            float currentTime = GetTime();
            if (currentTime - lastMoveTime > moveInterval) {
                // Move the snake based on the direction
                std::cout << direction << "\n";
                // game.Play(); // Update the game state (move the snake)
                lastMoveTime = currentTime; // Update the last move time
            }

        } else if (game_status == GameStatus::GAME_OVER) {
            game_over_screen.Draw();
            score_board.Draw(); // Draw score board
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
                Vector2 mousePoint = GetMousePosition();
                if (checkBoundred(mousePoint.x, mousePoint.y, start_screen, start)) {
                    game_status = GameStatus::PLAYING;
                } else if (checkBoundred(mousePoint.x, mousePoint.y, start_screen, exitText)) {
                    CloseWindow();
                    return 0;
                }
            }
        }

        EndDrawing();
    }

    // De-Initialization
    CloseWindow();
    return 0;
}

bool checkBoundred(float mou_x, float mou_y, MenuScreen screen, const std::string& title) {
    float width = screen.getButtonWidth();
    float height = screen.getButtonHeight();
    if (title == start || title == restart) {
        auto button_x = static_cast<float>(screen.getStartButtonX());
        auto button_y = static_cast<float>(screen.getStartButtonY());
        if (mou_x >= button_x && mou_x <= button_x+ width
            && mou_y >= button_y && mou_y <= button_y + height) {
            return true;
            }
    } else if (title == exitText) {
        auto button_x = static_cast<float>(screen.getExitButtonX());
        auto button_y = static_cast<float>(screen.getExitButtonY());
        if (mou_x >= button_x && mou_x <= button_x+ width
            && mou_y >= button_y && mou_y <= button_y + height) {
            return true;
            }
    }
    return false;
}