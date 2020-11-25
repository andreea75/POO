//
// Created by Andreea75 on 25.11.2020.
//
#pragma once
#include <string>
#include <vector>
#include "date_student.h"

class examen {
    std::string nume_materie;
    std::string data_examen;
    std::vector<date_student> v;

public:
    examen() ;
    ~examen() ;
    friend std::istream &operator>>(std::istream&, examen&) ;
    friend std::ostream &operator<<(std::ostream&, examen&) ;

};