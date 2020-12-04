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
    partial p;
    colocviu c;
    date_student d;
    out<<"La materia "<<e2.nume_materie<<" sunt inscrisi urmatorii studenti: "<<std::endl;
    for(int i = 0; i < e2.nr_studenti; i++) {
        out << "Studentul " << e2.v[i].get_nume_student() << " de la grupa "<<e2.v[i].get_grupa()<<" ,seria "<<e2.v[i].get_serie()<<"are urmatoarea situatie scolara:"<<std::endl;
        {
            if (e2.get_tip_examen() == "partial") {
                if (p.nota_partial() > 5)
                    out << "partial: " << p.nota_partial() << std::endl;
                else
                    out << "Nu a trecut pragul de 5 al partialului" << std::endl;
            }
            if (e2.get_tip_examen() == "colocviu") {
                if (c.nota_colocviu() > 5)
                    out << "colocviu: " << c.nota_colocviu() << std::endl;
                else
                    out << "Nu a trecut pragul de 5 al colocviului" << std::endl;
            }
            if (d.get_nota_examen() > 5)
                out << "examen: " << d.get_nota_examen() << std::endl;
            else
                out << "Va trebuii sa fie reexaminat" << std::endl;
        }
        out << "NOTA FINALA: " << d.nota_finala() << std::endl;
    }
    return out;
}