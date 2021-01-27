//
//  Game.cpp
//  TicTacToe
//
//  Created by Amr Gharseldin on 1/26/21.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

#include <iostream>
#include "Game.h"

using namespace::std;

Game::Game(){
    initializeBaord();
    player = 'X';
}

void Game::initializeBaord(){
    board = new char*[3];
    for(int i=0; i<3; i++){
        board[i] = new char[3];
        for(int j=0; j<3; j++)
            board[i][j] = '-';
    }
}

bool Game::invalidMove(int x, int y){
    return (x < 0 || y < 0) || (x > 2 || y > 2) || board[x][y] == 'X' || board[x][y] == 'O';
}

void Game::printBoard()
{
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            cout << " " << board[i][j] << " "<< ( j == 2 ? "\n" : "|" );
        cout << (i == 2 ? "" : "------------") << endl;
    }
}

bool Game::checkForWinner()
{
    bool weHaveWinner = 0;
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        weHaveWinner = 1; // rows
        else if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        weHaveWinner = 1; // columns
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        weHaveWinner = 1;
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        weHaveWinner = 1;
    return weHaveWinner;
}

void Game::changeTurn(){
    player = (player == 'X') ? 'O' : 'X';
}

void Game::start(){
    while (true)
    {
        int x, y, counter=0;
        cout << "Please enter your coordinates: " << endl;
        cin >> x >> y;
        x--;
        y--;
        counter++;
        if (invalidMove(x,y))
            cout << "Invalid coordinates, please try again!!" << endl
                 << endl;
        else
        {
            board[x][y] = player;
            printBoard();
            cout << endl;
            if (checkForWinner() && counter > 5)
                cout << "Congratulations Player " << player << " You Won !!!" << endl;
            changeTurn();
        }
    }
}
