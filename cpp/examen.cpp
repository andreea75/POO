//
// Created by Andreea75 on 25.11.2020.
//

#include "../header/date_student.h"
#include "../header/examen.h"
#include <iostream>

examen::examen() = default;

examen::~examen() = default;

std::istream& operator>>(std::istream &in, examen &e1){
    in>>e1.nume_materie;
    in>>e1.data_examen;
    int nr_studenti;
    in>>nr_studenti;
    date_student s;
    for( int i = 0; i < nr_studenti; i++)
    {
        in >> s;
        e1.v.push_back(s);
    }
    return in;
}

std::ostream& operator<<(std::ostream &out, examen &e2){
    out<<e2.nume_materie<<" "<<e2.data_examen<<std::endl;
    for(auto & i : e2.v){
        out << i;
    }
    return out;
}
