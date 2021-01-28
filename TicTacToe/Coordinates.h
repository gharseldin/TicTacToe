//
//  Coordinate.h
//  TicTacToe
//
//  Created by Ahmed Ghars El-Din on 27/01/2021.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

#ifndef Coordinate_h
#define Coordinate_h
#include <bits/stdc++.h>

using namespace std;

class Coordinates{
    
private:
    int x;
    int y;
    
public:
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
    
    Coordinates();
    Coordinates(int x, int y);

};

/*********
 You can see in the review that I created many smaller methods for ease of use. Start by reading the Game.h file with the comments. See how its structured. Then see the implementation. in the Game.cpp file. See how we start with the constructor which runs when you create any Game variable. Then the .start() method and what it does. This should give you a solid start for today's session. You will start getting better and better at this with time

next step I want you to look at that Game class and I want you to create a Class called Coordinates. Which has only two private attributes. x and y.
It should also have public setters and getters . And a construcor that enables us to create a Coordinate object while passing in values for x and y. And a default constructor that doesn't take anything and that initializes x and y to zero

Basically I want you to do the following in steps.
1- after you review the PR I want you to click the merge button to merge it in the code.
2 - go to your local develop branch and do a pull or sync on Github desktop to get those changes locally.
3- create a branch called coordinate-class-oop
4- in that class create the Coordinate.h and Coordinate.cpp file by translating the class diagram above.
5- commit your changes. (you might want to also commit the .pbxproj file since it holds information about the newly added files etc. Hopefully, we didn't add that to git ignore or you will have to open .gitignore (a hidden file at the root project folder) and delete the line of the .pbxproj file
6- push the branch and create a PR and make sure you create it into -> develop. If you create it into Master by mistake just close the PR and create a new one. IF you can do that practice before the course then you're very ready and you had your hands dirty with writing and the class will be a completely different experience. We will also use that coordinate class in the game as I will show you.
 
*******************/


#endif /* Coordinate_h */

