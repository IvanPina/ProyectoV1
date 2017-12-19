/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   enemigo.h
 * Author: ivan
 *
 * Created on 16 de diciembre de 2017, 16:13
 */

#ifndef ENEMIGO_H
#define ENEMIGO_H

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <vector>
#include "nodo.h"


class enemigo {
public:
    enemigo();
    enemigo(const enemigo& orig);
    virtual ~enemigo();
    void update();
    void mover(float p1, float p2);
    void draw();
    void inicio();
    sf::CircleShape getforma();
    void setdestino(nodo* d);
private:
    int estado;
    float x, y;
    float dx, dy;
    sf::CircleShape ene;
    std::vector<nodo*> ruta;

};

#endif /* ENEMIGO_H */

