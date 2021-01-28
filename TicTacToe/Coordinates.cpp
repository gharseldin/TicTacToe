//
//  Coordinate.cpp
//  TicTacToe
//
//  Created by Ahmed Ghars El-Din on 27/01/2021.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

#include <bits/stdc++.h>
#include "Coordinate.h"

using namespace std;

Coordinates::Coordinates(int x, int y){
    x = getX();
    y = getY();
}
void Coordinates::setX(int x){
    this->x = x;}
void Coordinates::setY(int y){
    this->y = y;}
int Coordinates::getX(){
    return x;}
int Coordinates::getY(){
    return y;}
