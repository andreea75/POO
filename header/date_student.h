//
// Created by Andreea75 on 25.11.2020.
//
#pragma once
#include <string>

class date_student {
protected:
    std::string nume_student;
    int grupa;
    int serie;
    float nota;
    std::string promovabilitate;
    friend class examen;

public:
    date_student(std::string = "-", int = 0, int = 0, float = 0, std::string = "-") ;
    ~date_student() ;
    bool promovat() ;
    friend std::istream &operator>>(std::istream&, date_student&) ;
    friend std::ostream &operator<<(std::ostream&, date_student&) ;
    date_student &operator=(const date_student&) ;

};