//
// Created by 74559 on 7/3/2024.
//

#ifndef CLICKBUTTON_H
#define CLICKBUTTON_H

class ClickButton {
public:
    int x, y, title_y;
    float width, height;
    const char* title;

    ClickButton(int x, int y, int title_y, float width, float height, const char *title);

    void Draw();

};



#endif //CLICKBUTTON_H
