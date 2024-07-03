//
// Created by 74559 on 7/3/2024.
//

#include "GameOverScreen.h"

#include <string>

#include "ClickButton.h"
#include "raylib.h"

GameOverScreen::GameOverScreen(int width, int height) : width(width), height(height) {
    buttonX = width / 8;
    buttonY = height / 8;
    exitY = buttonY + width / 2;
    buttonWidth = static_cast<float>(width) / 2 - static_cast<float>(width) / 8;
    buttonHeight = (static_cast<float>(height) / 2 - static_cast<float>(height) / 8) / 2;
}

void GameOverScreen::Draw() {
    ClearBackground(LIME);

    std::string restart = "Restart";
    const char* restartTitle = restart.c_str();
    ClickButton startButton = {buttonX, buttonY, buttonY, buttonWidth, buttonHeight, restartTitle};
    startButton.Draw();

    std::string exit = "Exit";
    const char* exitTitle = exit.c_str();
    ClickButton exitButtion = {buttonX, exitY, buttonY, buttonWidth, buttonHeight, exitTitle};
    exitButtion.Draw();
}

int GameOverScreen::GetReStartButtonX() {
    return buttonX;
}

int GameOverScreen::GetReStartButtonY() {
    return buttonY;
}

int GameOverScreen::GetExitButtonX() {
    return buttonX;
}

int GameOverScreen::GetExitButtonY() {
    return exitY;
}

float GameOverScreen::GetButtonWidth() {
    return buttonWidth;
}

float GameOverScreen::GetButtonHeight() {
    return buttonHeight;
}
