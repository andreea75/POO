//
// Created by Andreea75 on 02.12.2020.
//

#pragma once
#include "../header/metoda_evaluare.h"
#include "../header/materie.h"

class partial :public metoda_evaluare, public materie {
     int nota_partial_1;
     int nota_partial_2;
public:
    partial();

    ~partial();

    float nota() const ;


};
