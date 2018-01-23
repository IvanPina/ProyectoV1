/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bala.cpp
 * Author: ivan
 * 
 * Created on 12 de enero de 2018, 19:58
 */

#include "bala.h"
#include "iostream"
using namespace std;

bala::bala() {
    b=sf::CircleShape(5.f);
    vel=sf::Vector2f(0.f,0.f);
    max=2.f;
    b.setFillColor(sf::Color::Green);
}

bala::bala(const bala& orig) {
}

bala::~bala() {
}


void bala::update(){
    b.move(vel);
    //std::cout << b.getPosition().x << std::endl;
}

sf::CircleShape bala::getb(){
    return b;
}

sf::Vector2f bala::getvel(){
    return vel;
}

float bala::getmax(){
    return max;
}

void bala::setb(float posx, float posy){
    b.setPosition(posx,posy);
}

void bala::setvel(sf::Vector2f newvel){
    vel=newvel;
}

void bala::setmax(float newmax){
    max=newmax;
}
