//
// Created by 74559 on 7/3/2024.
//

#ifndef STARTSCREEN_H
#define STARTSCREEN_H



class StartScreen {
public:
    int width, height;
    int buttonX, buttonY, exitY;
    float buttonWidth, buttonHeight;


    StartScreen(int width, int height);

    void Draw();

    int GetStartButtonX();

    int GetStartButtonY();

    int GetExitButtonX();

    int GetExitButtonY();

    float GetButtonWidth();

    float GetButtonHeight();
};



#endif //STARTSCREEN_H
