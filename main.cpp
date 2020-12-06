#include "header/materie.h"
#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream fin_M("materii.in");
    int nr_materii = 0;
    materie mat;
    if(fin_M.is_open())
    {
        fin_M >> nr_materii;
        std::vector<materie> Materii(nr_materii);
        for (int i = 0; i < nr_materii; i++) {
            Materii.push_back(mat);
            std::cout << Materii[i];
        }
    }
    else std::cout<<"Fisierul nu a putut fi deschis";
}
