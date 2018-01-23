/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bala.h
 * Author: ivan
 *
 * Created on 12 de enero de 2018, 19:58
 */

#ifndef BALA_H
#define BALA_H

#include <SFML/Graphics/CircleShape.hpp>


class bala {
public:
    
    sf::CircleShape getb();
    sf::Vector2f getvel();
    float getmax();
    void setb(float posx, float posy);
    void setvel(sf::Vector2f newvel);
    void setmax(float newmax);
    void update();
    bala();
    bala(const bala& orig);
    virtual ~bala();
private:

    sf::CircleShape b;
    sf::Vector2f vel;
    float max;
};

#endif /* BALA_H */

