//
// Created by Andreea75 on 25.11.2020.
//

#include "../header/date_student.h"
#include "../header/partial.h"
#include "../header/colocviu.h"
#include <iostream>

date_student::date_student( const std::string& nume_student, int grupa, int serie, float nota_examen) {
    this->nume_student = nume_student;
    this->grupa = grupa;
    this->serie = serie;
    this->nota_examen = nota_examen;
}

date_student::~date_student() = default;

std::istream& operator>>(std::istream& in, date_student& s1){
    in >> s1.nume_student;
    in >> s1.grupa;
    in >> s1.serie;
    in >> s1.nota_examen;
    return in;
}

float date_student::nota_finala() const {
    class partial p;
    class colocviu c;
    float nota;
    nota = 0.2 * p.nota_partial() + 0.3 * c.nota_colocviu() + 0.5 * nota_examen;
    return nota;
}

date_student &date_student::operator=(const date_student &s3) = default;