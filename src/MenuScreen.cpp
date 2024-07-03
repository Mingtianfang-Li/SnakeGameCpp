//
// Created by 74559 on 7/3/2024.
//

#include "MenuScreen.h"

#include <string>

#include "ClickButton.h"
#include "raylib.h"

MenuScreen::MenuScreen(int width, int height, const char* firstButton, const char* secondButton):
width(width), height(height), firstButton(firstButton), secondButton(secondButton) {
    buttonX = width / 8;
    buttonY = height / 8;
    exitY = buttonY + width / 2;
    buttonWidth = static_cast<float>(width) / 2 - static_cast<float>(width) / 8;
    buttonHeight = (static_cast<float>(height) / 2 - static_cast<float>(height) / 8) / 2;
}

void MenuScreen::Draw() {
    ClearBackground(LIME);

    ClickButton startButton = {buttonX, buttonY, buttonY, buttonWidth, buttonHeight, firstButton};
    startButton.Draw();

    ClickButton exitButtion = {buttonX, exitY, buttonY, buttonWidth, buttonHeight, secondButton};
    exitButtion.Draw();
}

int MenuScreen::getStartButtonX() {
    return buttonX;
}

int MenuScreen::getStartButtonY() {
    return buttonY;
}

int MenuScreen::getExitButtonX() {
    return buttonX;
}

int MenuScreen::getExitButtonY() {
    return exitY;
}

float MenuScreen::getButtonWidth() {
    return buttonWidth;
}

float MenuScreen::getButtonHeight() {
    return buttonHeight;
}
