#include "header/materie.h"
#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream fin_M;
    int nr_materii = 0;
    materie mat;
    try{
      fin_M.exceptions(std::ifstream::failbit);
      fin_M.open("materii.in");
      fin_M >> nr_materii;
      std::vector<materie> Materii (nr_materii);
      for (int i = 0; i < nr_materii; i++)
      {
           fin_M >> Materii[i];
            //Materii.push_back(mat);
            std::cout << Materii[i];
        }
    }
  catch (const std::ifstream::failure& err) {
      std::cout << "Fisierul nu a putut fi deschis.\n";
      std::cout << err.what() << "\n" << err.code() << "\n";
      return 1;
   }

    fin_M.close();
}
