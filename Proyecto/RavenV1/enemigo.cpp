/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   enemigo.cpp
 * Author: ivan
 * 
 * Created on 16 de diciembre de 2017, 16:13
 */

#include <valarray>

#include "iostream"
#include "enemigo.h"
using namespace std;

enemigo::enemigo() {
    x=10;
    y=10;
    estado=1;
    //std::cout << ene.getRadius() << std::endl;
    ene=sf::CircleShape(10.f);
    ene.setRadius(10.f);
    //std::cout << ene.getRadius() << std::endl;
    ene.setPosition(x,y);
    ene.setPointCount(100);
    ene.setFillColor(sf::Color::Red);
    ene.setPosition(x,y);
}

void enemigo::inicio(){
    ene.setRadius(10.f);
    ene.setPointCount(100);
    ene.setFillColor(sf::Color::Red);
    ene.setPosition(x,y);
}

void enemigo::update(){
    if(estado==1){
        x++;
        if(x>40){
            estado=2;//izquierda
        }
    }
    else if(estado==2){//estado=2
     x--;
     if(x<20){
         estado=1;//derecha
     }
    }
    else{//estado=3;
        if(!ruta.empty()){
            //std::cout << dx << std::endl;
            if(x<dx){
                x++;
            }
            if(x>dx){
                x--;
            }
            if(y<dy){
               y++;
            }
            if(y>dy){
                y--;
            }
            if(x==dx&&y==dy){
                std::vector<nodo*>::iterator it=ruta.begin();
                ruta.erase(it);
                estado=1;
            }
        }else{
            //pedir nuevo nodo a clase correspondiente
        }
    }
    
    //ene.setRadius(10.f);
    //ene.setPointCount(100);
    //ene.setFillColor(sf::Color::Red);
    
    ene.setPosition(x,y);
    //std::cout << ene.getPosition().x << std::endl;
    //std::cout << ene.getRadius() << std::endl;
}

void enemigo::mover(float p1, float p2){
    x=p1;
    y=p2;
    ene.setPosition(x,y);
}

void enemigo::setdestino(nodo* d){
    estado=3;
    ruta.push_back(d);
    dx=ruta[0]->getx();
    dy=ruta[0]->gety();
}

void enemigo::draw(){
    ene.setPosition(x,y);
    //std::cout << x << std::endl;
   
    
}

sf::CircleShape enemigo::getforma(){
    return ene;
}

enemigo::enemigo(const enemigo& orig) {
}

enemigo::~enemigo() {
}

