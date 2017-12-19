/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodo.h
 * Author: ivan
 *
 * Created on 18 de diciembre de 2017, 19:02
 */

#ifndef NODO_H
#define NODO_H

class nodo {
public:
    nodo(float p1, float p2);
    nodo(const nodo& orig);
    virtual ~nodo();
    float getx();
    float gety();
private:
    float x, y;

};

#endif /* NODO_H */

