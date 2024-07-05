//
// Created by 74559 on 7/3/2024.
//

#ifndef GAME_H
#define GAME_H



class Game {
public:
    int width, height;
    int score;

    Game(int width, int height);

    bool collesion();

    void generateFood();

    void DrawgameOver();

    void Play();
};



#endif //GAME_H
