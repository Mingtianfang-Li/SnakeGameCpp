//
// Created by 74559 on 7/3/2024.
//

#include "Game.h"

#include <iostream>

#include "GameBoard.h"
#include "Snake.h"


Game::Game(int width, int height) : width(width), height(height) {
}

void Game::Play() {
    // init a game board;
    GameBoard game_board = {width, height};
    game_board.Draw();
    // init snake; create another class for snake
    int snakeStartX = width / 2 - 10;
    int snakeStartY = height / 2 - 10;
    int offset = 10;

    Snake snake = {snakeStartX, snakeStartY,};
    snake.Draw();
    // while not collesion still in game
    // snake.Move();

    // game over
}

bool Game::collesion() {

    // check collesion on wall
    // check collesion on snake
    return false;
}

void Game::generateFood() {
    // random a food on the screen
}

void Game::DrawgameOver() {
    // draw a game over
    // show the final score
}

