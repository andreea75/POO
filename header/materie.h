//
// Created by Andreea75 on 02.12.2020.
//

#pragma once
#include "../header/date_student.h"
#include <string>
#include <vector>

class materie {
    std::string nume_materie;
    int nr_examene;
    int nr_studenti;
    std::string tip_examen; // tip_examen = partial, colocviu
    std::vector<date_student> v;
    friend class date_student;
    friend class partial;
    friend class colocviu;
public:
    materie();

    ~materie();

    friend std::istream &operator>>(std::istream &, materie &);

    friend std::ostream &operator<<(std::ostream &, materie &);

    std::string get_tip_examen(){
        return tip_examen;
    }
};