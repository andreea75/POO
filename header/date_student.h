//
// Created by Andreea75 on 25.11.2020.
//
#pragma once
#include <string>
#include "../header/materie.h"

class date_student{
protected:
    std::string nume_student;
    int grupa;
    int serie;
    float nota_examen;
    friend class materie;
    //friend class partial;
    //friend class colocviu;
    friend class metoda_evaluare;

public:
    explicit date_student(const std::string& = "-", int = 0, int = 0, float = 0) ;
    //date_student();
    virtual ~date_student() ;
    //virtual float nota_finala() const ;

    friend std::istream &operator>>(std::istream&, date_student&) ;
    date_student &operator=(const date_student&) ;

    std::string get_nume_student(){
        return this->nume_student;
    }

    int get_grupa(){
        return this->grupa;
    }
    int get_serie(){
        return this->serie;
    }
    float get_nota_examen(){
        return this->nota_examen;
    }
};