//
// Created by Andreea75 on 02.12.2020.
//

#include "../header/materie.h"
#include "../header/partial.h"
#include "../header/colocviu.h"
#include <iostream>

materie::materie() = default;

materie::~materie() = default;

std::istream& operator>>(std::istream &in, materie &e1){
    in>>e1.nume_materie;
    in>>e1.nr_examene;
    for(int i = 0; i < e1.nr_examene; i++)
    {
        in >> e1.tip_examen[i];
    }
    in >> e1.nr_studenti;
    date_student s;
    for( int i = 0; i < e1.nr_studenti; i++)
    {
        in >> s;
        e1.v.push_back(s);
    }
    return in;
}

std::ostream& operator<<(std::ostream &out, materie &e2){
    //partial p;
    //colocviu c;
    //date_student d;
    metoda_evaluare e;
    materie *m;
    out<<"La materia "<<e2.nume_materie<<" sunt inscrisi urmatorii studenti: "<<std::endl;
    for(int i = 0; i < e2.nr_studenti; i++) {
        out << "Studentul " << e2.v[i].get_nume_student() << " de la grupa "<<e2.v[i].get_grupa()<<" ,seria "<<e2.v[i].get_serie()<<"are urmatoarea situatie scolara:"<<std::endl;
        if (e2.get_tip_examen() == "partial")
            m = new partial();

        else  if (e2.get_tip_examen() == "colocviu")
            m = new colocviu();

        out << "NOTA FINALA: " << e.nota() << std::endl;
    }
    return out;
}