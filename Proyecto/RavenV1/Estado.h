/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estado.h
 * Author: ivan
 *
 * Created on 18 de enero de 2018, 13:14
 */
/*
#ifndef ESTADO_H
#define ESTADO_H

#include "enemigo.h"

class Estado {
public:
    Estado(enemigo* e);
    Estado(const Estado& orig);
    virtual ~Estado();
    virtual int update();
    virtual void enter();
    virtual void exit();
private:

    enemigo* en;
    int id;
};

#endif /* ESTADO_H */

