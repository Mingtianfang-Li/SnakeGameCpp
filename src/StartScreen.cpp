//
// Created by 74559 on 7/3/2024.
//

#include "StartScreen.h"

#include <string>

#include "ClickButton.h"
#include "raylib.h"

StartScreen::StartScreen(int width, int height) : width(width), height(height) {
    buttonX = width / 8;
    buttonY = height / 8;
    exitY = buttonY + width / 2;
    buttonWidth = static_cast<float>(width) / 2 - static_cast<float>(width) / 8;
    buttonHeight = (static_cast<float>(height) / 2 - static_cast<float>(height) / 8) / 2;
}

void StartScreen::Draw() {
    ClearBackground(LIME);

    std::string start = "start";
    const char* startTitle = start.c_str();
    ClickButton startButton = {buttonX, buttonY, buttonY, buttonWidth, buttonHeight, startTitle};
    startButton.Draw();

    std::string exit = "Exit";
    const char* exitTitle = exit.c_str();
    ClickButton exitButtion = {buttonX, exitY, buttonY, buttonWidth, buttonHeight, exitTitle};
    exitButtion.Draw();
}

int StartScreen::GetStartButtonX() {
    return buttonX;
}

int StartScreen::GetStartButtonY() {
    return buttonY;
}

int StartScreen::GetExitButtonX() {
    return buttonX;
}

int StartScreen::GetExitButtonY() {
    return exitY;
}

float StartScreen::GetButtonWidth() {
    return buttonWidth;
}

float StartScreen::GetButtonHeight() {
    return buttonHeight;
}
