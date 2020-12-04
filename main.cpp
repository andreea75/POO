#include "header/materie.h"
#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream fin_M("materii.in");
    int nr_materii = 0;
    if(fin_M.is_open())
    {
        fin_M >> nr_materii;
        materie Materie[nr_materii];
        for (int i = 0; i < nr_materii; i++) {
            fin_M >> Materie[i];
            std::cout << Materie[i];
        }
    }
    else std::cout<<"Fisierul nu a putut fi deschis";
}
