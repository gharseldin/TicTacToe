//
//  main.cpp
//  TicTacToe
//
//  Created by Amr Gharseldin on 1/24/21.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

// lets include this cool header
#include <bits/stdc++.h>
#include "Game.h"
// and this as well to remove the std which I have no idea what it does or what it is however those double dots std::cout remind me of the classes and OOP
using namespace std;

void printBoard(int x, int y, char arr[][3]);
bool checkForWinner(char arr[][3]);

int main()
{
    Game newGame;
    newGame.start();
    
    /*
    char arr[3][3], player = 'X';
    int x, y, counter = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            arr[i][j] = '_';
    while (true)
    {
        cout << "Please enter your coordinates: " << endl;
        cin >> x >> y;
        x--;
        y--;
        counter++;
        if ((x < 0 || y < 0) || (x > 2 || y > 2) || arr[x][y] == 'X' || arr[x][y] == 'O')
            cout << "Invalid coordinates, please try again!!" << endl
                 << endl;
        else
        {
            arr[x][y] = player;
            printBoard(x, y, arr);
            cout << endl;
            if (checkForWinner(arr) && counter > 5)
            {
                cout << "Congratulations Player " << player << " You Won !!!" << endl;
                return 0;
            }
            player = (player == 'X') ? 'O' : 'X';
        }
    }
     */
    return 0;
}

bool checkForWinner(char arr[][3])
{
    bool weHaveWinner = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
        weHaveWinner = 1; // rows
        else if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
        weHaveWinner = 1; // columns
    }
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        weHaveWinner = 1;
    else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        weHaveWinner = 1;
    return weHaveWinner;
}

void printBoard(int x, int y, char arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << arr[i][j] << " "
                 << "|";
        }
        cout << endl
             << "------------" << endl;
    }
}
