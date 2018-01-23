/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodo.cpp
 * Author: ivan
 * 
 * Created on 18 de diciembre de 2017, 19:02
 */

#include "nodo.h"

nodo::nodo(float p1, float p2) {
    x=p1;
    y=p2;
}

nodo::nodo(const nodo& orig) {
}

nodo::~nodo() {
}

float nodo::getx(){
    return x;
}

float nodo::gety(){
    return y;
}


