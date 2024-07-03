//
// Created by 74559 on 7/3/2024.
//

#ifndef MenuSCREEN_H
#define MenuSCREEN_H



class MenuScreen {
public:
    int width, height;
    int buttonX, buttonY, exitY;
    float buttonWidth, buttonHeight;
    const char* firstButton;
    const char* secondButton;


    MenuScreen(int width, int height, const char* firstButton, const char* secondButton);

    void Draw();

    int getStartButtonX();

    int getStartButtonY();

    int getExitButtonX();

    int getExitButtonY();

    float getButtonWidth();

    float getButtonHeight();
};



#endif
