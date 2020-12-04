//
// Created by Andreea75 on 02.12.2020.
//
#include "../header/partial.h"
#include <ctime>
#include <cstdlib>

partial::partial() {
    srand((unsigned) time (nullptr));
    int random = (rand() % 10)+1;
    this->nota_partial_1= random;
    random = (rand() % 10)+1;
    this->nota_partial_2 = random;

}

partial::~partial() = default;

float partial::nota_partial() const
{
    float medie;
    medie = (this->nota_partial_1 + this->nota_partial_2)/2.0;
    return medie;
}
