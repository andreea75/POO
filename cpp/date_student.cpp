//
// Created by Andreea75 on 25.11.2020.
//

#include "../header/date_student.h"
#include <iostream>

date_student::date_student(std::string nume_student, int grupa, int serie, float nota, std::string promovabilitate) {
    this->nume_student = nume_student;
    this->grupa = grupa;
    this->serie = serie;
    this->nota = nota;
    this->promovabilitate = promovabilitate;
}

date_student::~date_student() = default;

bool date_student::promovat(){
    if(nume_student == " " || nota == 0)
    {
        this->promovabilitate = "absent";
        return false;
    }
    else if(nota > 5)
    {
        this->promovabilitate = "promovat";
        return true;
    }
    else
    {
        this->promovabilitate = "nepromovat";
        return false;
    }
}

std::istream& operator>>(std::istream& in, date_student& s1){
    in >> s1.nume_student;
    in >> s1.grupa;
    in >> s1.serie;
    in >> s1.nota;
    return in;
}

std::ostream& operator<<(std::ostream &out, date_student& s){
    if(s.promovat())
        out << "Felicitari ati trecut examenul!" <<std::endl;
    else out <<"Ne pare rau. Veti fi reexaminat in sesiunea de restante" <<std::endl;
    return out;
}

date_student &date_student::operator=(const date_student &s3){
    this->nume_student = s3.nume_student;
    this->grupa = s3.grupa;
    this->serie = s3.serie;
    this->nota = s3.nota;
    this->promovabilitate = s3.promovabilitate;
    return(*this);
}