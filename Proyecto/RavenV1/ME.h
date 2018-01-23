/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ME.h
 * Author: ivan
 *
 * Created on 18 de enero de 2018, 13:08
 */
/*
#ifndef ME_H
#define ME_H

#include <vector>
#include "Estado.h"
#include "Estado1.h"


class enemigo;
class ME {
public:
    ME(enemigo* e);
    void update();
    ME(const ME& orig);
    virtual ~ME();
private:

    int lasts;
    enemigo* punt;
    std::vector<Estado*> vecest;
};

#endif /* ME_H */

