//
// Created by Andreea75 on 02.12.2020.
//
#include "../header/colocviu.h"
#include <ctime>
#include <cstdlib>

colocviu::colocviu() {
    srand((unsigned) time (nullptr));
    int random = (rand() % 10)+1;
    this->nota_oral= random;
    random = (rand() % 10)+1;
    this->nota_caiet= random;

}

colocviu::~colocviu() = default;

float colocviu::nota_colocviu() const
{
    float medie;
    medie = (this->nota_oral + this->nota_caiet)/2.0;
    return medie;
}

