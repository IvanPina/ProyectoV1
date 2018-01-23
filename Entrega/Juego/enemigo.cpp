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
    x=50;
    y=50;
    estado=1;
    //std::cout << ene.getRadius() << std::endl;
    ene=sf::CircleShape(10.f);
    ene.setRadius(10.f);
    //std::cout << ene.getRadius() << std::endl;
    ene.setPosition(x,y);
    ene.setPointCount(100);
    ene.setFillColor(sf::Color::Red);
    ene.setPosition(x,y);
    ene.setOrigin(10,10);
    gun=sf::RectangleShape(sf::Vector2f(10,5));
    gun.setPosition(x+5,y);
    gun.setFillColor(sf::Color::Blue);
    gun.setOrigin(-10,2.5);
    gun.setRotation(0);
    b1=bala();//
    b1.setb(x,y);
    //maquina=ME(&this);//
    
}

void enemigo::inicio(){
    ene.setRadius(10.f);
    ene.setPointCount(100);
    ene.setFillColor(sf::Color::Red);
    ene.setPosition(x,y);
}

void enemigo::update(){
    //ME.update();
    
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
                if(ruta.empty()){
                estado=1;
                }
                else{
                    //std::cout << "fin nodo actual" << std::endl;
                    dx=ruta[0]->getx();
                    dy=ruta[0]->gety();
                }
            }
        }else{
            //pedir nuevo nodo a clase correspondiente
        }
    }
    
    //ene.setRadius(10.f);
    //ene.setPointCount(100);
    //ene.setFillColor(sf::Color::Red);
    
    ene.setPosition(x,y);
    gun.setPosition(x,y);
    
    //normalizar rotacion
    sf::Vector2f normal=normalizar(gun.getRotation());
    sf::Vector2f actual=ene.getPosition();
    //como cambiar angulos??? vista?
   /*
    sf::Vector2f nuevo=normalizar(90);
    const float PI = 3.14159265;

    float aux1 = normal.x - nuevo.x;
    float aux2 = normal.y - nuevo.y;

    float rot = ( atan2( aux2, aux1 ) ) * 180 / PI;
    gun.setRotation(rot);
    */
    sf::Vector2f aim=normal;
    sf::Vector2f aimn= aim /float(sqrt(pow(aim.x,2)+pow(aim.y,2)));
    
    float auxb1=b1.getmax();
    b1.setvel(aimn*auxb1);
    //sf::Vector2f auxb2=b1.getvel();
    b1.update();
    //b1.b.move(1,1);
    //std::cout << aimn.x << " " << aimn.y << std::endl;
    //gun.rotate(10);
    //std::cout << ene.getPosition().x << std::endl;
    //std::cout << ene.getRadius() << std::endl;
     
}


sf::Vector2f enemigo::normalizar(float r){
    
    float raux=r;
    sf::Vector2f result;
    if(r==360){
        raux=0.f;
        r=0.f;
    }
    if(r>=270){
        raux=r-270.f;
    }else if(r>=180){
        raux=r-180.f;
    }else if(r>=90){
        raux=r-90.f;
    }
    float aux1=(1.f-0.f)/(90.f-0.f)*(raux-0.f)+0.f;//de  0 a 1
    float aux2=1.f-aux1;// de 1 a 0
    //y inversa
    if(r<90){
        result.x=aux2;
        result.y=aux1;
    }
    if(r>=90&&r<180){
        result.x=aux1*(-1);
        result.y=aux2;
    }
    if(r>=180&&r<270){
        result.x=aux2*(-1);
        result.y=aux1*(-1);
    }
    if(r>=270&&r<360){
        result.x=aux1;
        result.y=aux2*(-1);
    }
    return result;
}

void enemigo::mover(float p1, float p2){
    x=p1;
    y=p2;
    ene.setPosition(x,y);
    b1.setb(p1,p2);
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

sf::CircleShape enemigo::getbala(){
    return b1.getb();
}

sf::RectangleShape enemigo::getpistola(){
    return gun;
}

sf::Vector2f enemigo::getpose(){
    sf::Vector2f result;
    result.x=x;
    result.y=y;
    return result;
}

void enemigo::setpose(sf::Vector2f s){
    x=s.x;
    y=s.y;
}

void enemigo::setposf(sf::Vector2f s){
    ene.setPosition(s);
}

enemigo::enemigo(const enemigo& orig) {
}

enemigo::~enemigo() {
}

