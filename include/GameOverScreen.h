//
// Created by 74559 on 7/3/2024.
//

#ifndef GAMEOVERSCREEN_H
#define GAMEOVERSCREEN_H

class GameOverScreen {
public:
    int width, height;
    int buttonX, buttonY, exitY;
    float buttonWidth, buttonHeight;

    GameOverScreen(int width, int height);

    void Draw();

    int GetReStartButtonX();

    int GetReStartButtonY();

    int GetExitButtonX();

    int GetExitButtonY();

    float GetButtonWidth();

    float GetButtonHeight();
};

#endif //GAMEOVERSCREEN_H
