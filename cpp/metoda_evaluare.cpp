//
// Created by Andreea75 on 08.01.2021.
//
#include "../header/metoda_evaluare.h"
#include "../header/partial.h"
#include "../header/colocviu.h"
#include "../header/date_student.h"

float metoda_evaluare::nota() const {
    partial p;
    colocviu c;
    date_student d;
    float nota;
    nota = 0.2 * p.nota() + 0.3 * c.nota() + 0.5 * d.get_nota_examen();
    return nota;
}