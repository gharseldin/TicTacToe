//
//  Coordinate.cpp
//  TicTacToe
//
//  Created by Ahmed Ghars El-Din on 27/01/2021.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

#include <bits/stdc++.h>
#include "Coordinates.h"

using namespace std;

Coordinates::Coordinates(int xc, int yc){
    /**
     here you might've missunderstood the constuctor concept
     A constructor will create a space in memory for each variable in the object
     Then  it will take any of the paremeters you enter here and initialize the
     object's attributes.
     So this x and this y should be equal to the x and y we supply to the constructor.
     */
    this->x = xc;
    this->y = yc;
}
void Coordinates::setX(int x){
    this->x = x;}
void Coordinates::setY(int y){
    this->y = y;}
int Coordinates::getX(){
    return x;}
int Coordinates::getY(){
    return y;}
