//
// Created by Andreea75 on 02.12.2020.
//
#pragma once
#include "../header/metoda_evaluare.h"
#include "../header/materie.h"

class colocviu :public metoda_evaluare, public materie {
     int nota_oral;
     int nota_caiet;
public:
    colocviu();
    ~colocviu();
    float nota() const;
};