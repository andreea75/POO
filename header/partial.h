//
// Created by Andreea75 on 02.12.2020.
//

#pragma once
#include "../header/date_student.h"

class partial :public date_student {
     int nota_partial_1;
     int nota_partial_2;
public:
    partial();

    ~partial();

    float nota_partial() const ;

    /*static int get_nota_partial_1(){
        return nota_partial_1;
    }
    static int get_nota_partial_2(){
        return nota_partial_2;
    }*/

};
