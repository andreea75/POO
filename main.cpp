#include <iostream>
#include <fstream>
using namespace std;

class Examen
{
    string nume_student;
    int nota;
    int grupa;

public:
    Examen(string nume_student=" ",int nota=0,int grupa=0)
    {
        this->nume_student=nume_student;
        this->nota=nota;
        this->grupa=grupa;
        cout<<"Nume:"<<this->nume_student<<"   Nota:"<<this->nota<<"   Grupa:"<<this->grupa<<endl;
    }

    Examen(Examen& examen)
    {
        nume_student=examen.nume_student;
        nota=examen.nota;
        grupa=examen.grupa;
    }

    ~Examen()
    {
        cout<<"\nAcestea sunt informatiile despre notele studentilor la examenul de POO";
    }

    void restanta()
    {
        if(nume_student == " " || nota == 0)
        {
            cout<<"\nStudentul "<<nume_student<<" nu s-a prezentat la examen.\n";
            cout<<"Acesta va fi reevaluat in sesiunea de restante!\n";
        }
        else if(nota > 5)
            cout<<"\nStudentul "<<nume_student<<" din grupa "<<grupa<<" a trecut examenul de POO.\n";
        else
        {
            cout<<"\nStudentul "<<nume_student<<" din grupa "<<grupa<<" a picat examenul de POO."<<"\n";
            cout<<"Acesta va fi reevaluat in sesiunea de restante!\n";
        }
    }
};

int main()
{
    cout<<"Date Examen: \n";
    Examen POO_1;
    Examen POO_2("Andrei");
    Examen POO_3("Ioan",3);
    Examen POO_4("Alina",8,253);
    Examen POO_5("Mara",4,254);
    Examen POO_6("Calin",10,252);
    Examen POO_7(POO_4);

    cout<<"\n\nInformatii despre studentii: \n\n";
    POO_1.restanta();
    POO_2.restanta();
    POO_3.restanta();
    POO_4.restanta();
    POO_5.restanta();
    POO_6.restanta();
    POO_7.restanta();
}
