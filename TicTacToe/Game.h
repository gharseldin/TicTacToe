//
//  Game.hpp
//  TicTacToe
//
//  Created by Amr Gharseldin on 1/26/21.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

#ifndef Game_h
#define Game_h

#include <stdio.h>
#include "Coordinates.h"

class Game{
    /**
     I created the board and player as private variables since no one outside of the class really needs to access them
     I also created a number of private functions to help with the flow of the game. Again they are all private becuase
     no one really needs to access those functions from the outside. They are the internals of how the game works.
     If you notice you'll see that the functions don't really need any parameters. That is because they can accessattributes
     board and player directly because they are inside the same class. So all methods can see those attributes and work
     with them directly. 
     */
private:
    
    char **board;
    char player;
    
    
    void initializeBaord();
    Coordinates captureInput();
    void printBoard();
    bool invalidMove(Coordinates co);
    bool checkForWinner();
    void changeTurn();
    
    /**
     For public functions I made sure the constuctor is public since it is required to create an instance of the game.
     The constructor implimentation will initialize player to 'X' and will initialize the board character array to be a 3 x 3
     character array. I also created a start method that is required by the outside to initiate the game play.
     */
public:
    // Constructor doesn't require any outside parameters in our case. Its empty.
    Game();
    // A public method to start the game.
    void start();

};
#endif /* Game_h */
