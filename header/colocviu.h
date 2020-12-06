//
// Created by Andreea75 on 02.12.2020.
//
#pragma once
#include "../header/date_student.h"

class colocviu :public date_student{
     int nota_oral;
     int nota_caiet;
public:
    colocviu();
    ~colocviu();
    float nota_colocviu() const;
};