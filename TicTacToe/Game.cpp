//
//  Game.cpp
//  TicTacToe
//
//  Created by Amr Gharseldin on 1/26/21.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

#include <iostream>
#include "Game.h"
#include "Coordinates.h"

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

/**
 Now we are able to define the CaptureInput class in a separate function and return a
 Coordinates object. Before this we couldn't create a separete function to capture input
 becauce we couldn't return x and y because functions only return one value. A function
 cannot return two or three values unless you bundle them up in an array or object from a class
 */
Coordinates Game::captureInput(){
    int x, y;
    cout << "Please enter your coordinates: " << endl;
    cin >> x >> y;
    x--;
    y--;
    Coordinates co( x , y );
    return co;
}

/**
 we adjusted the invalidMove function to just take a Coordinates object then use it to find if the move is
 invalid or not. Inside the function it will pick out the data it needs from this object and use it.
 */
bool Game::invalidMove(Coordinates co){
    int x = co.getX();
    int y = co.getY();
    return (x < 0 || y < 0) || (x > 2 || y > 2) || board[x][y] == 'X' || board[x][y] == 'O';
}

bool Game::checkNoMoves(){
    bool noMoves = true;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j]!='X'||board[i][j]!='O')
                noMoves = false;
    return noMoves;
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
        // since we removed the counter we need to update the statement to implicitly specify that the points on board need to be either X or O to have a winner.
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && (board[0][i] == 'X' || board[0][i] == 'O'))
        weHaveWinner = 1; // rows
        else if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && (board[i][0] == 'X' || board[i][0] == 'O'))
        weHaveWinner = 1; // columns
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && (board[0][0] == 'X' || board[0][0] == 'O'))
        weHaveWinner = 1;
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && (board[0][2] == 'X' || board[0][2] == 'O'))
        weHaveWinner = 1;
    return weHaveWinner;
}

void Game::changeTurn(){
    player = (player == 'X') ? 'O' : 'X';
}

void Game::start(){
    while (true)
    {
        Coordinates co = captureInput();
        if (invalidMove(co))
            cout << "Invalid coordinates, please try again!!" << endl
                 << endl;
        else
        {
            // Here I use the co.getX() and co.getY() to check a place on the board
            board[co.getX()][co.getY()] = player;
            printBoard();
            cout << endl;
            if (checkForWinner()){
                cout << "Congratulations Player " << player << " You Won !!!" << endl;
                // we need to break here so the game ends once a player wins.
                break;
            }changeTurn();
        }
    }
}
