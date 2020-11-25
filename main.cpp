#include "header/examen.h"
#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream fin("citire.in");
    examen E;
    date_student c;
    fin>>E;
    fin>>c;
    std::cout<<E;
    std::cout<<c;
    return 0;
}
