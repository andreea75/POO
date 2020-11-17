#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <vector>
class examen;

class date_student {
protected:
    string nume_student;
    int grupa;
    int serie;
    float nota;
    string promovabilitate;

    friend class examen;

public:
    date_student(string nume_student = "-", int grupa = 0, int serie = 0, float nota = 0, string promovabilitate = "-") {
        this->nume_student = nume_student;
        this->grupa = grupa;
        this->serie = serie;
        this->nota = nota;
        this->promovabilitate = promovabilitate;
    }

    ~date_student() = default;

    friend istream &operator>>(istream& in, date_student& s1){
        in >> s1.nume_student;
        in >> s1.grupa;
        in >> s1.serie;
        in >> s1.nota;
        return in;
    }

    friend ostream &operator<<(ostream &out, date_student& s){
      // out << s.nume_student << " " << s.grupa << " " << s.serie << " " << s.nota << "/n";
        if(s.promovat())
            out << "Felicitari ati trecut examenul!" << endl;
        else out <<"Ne pare rau. Veti fi reexaminat in sesiunea de restante" << endl;
       return out;
    }

    date_student &operator=(const date_student &s3){
        this->nume_student = s3.nume_student;
        this->grupa = s3.grupa;
        this->serie = s3.serie;
        this->nota = s3.nota;
        this->promovabilitate = s3.promovabilitate;
        return(*this);
    }

    bool promovat(){
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

};

class examen{
    string nume_materie;
    string data_examen;
    vector<date_student*> v;

public:

    examen() = default;

    ~examen() = default;


    friend istream &operator>>(istream &in, examen &e1){
        in>>e1.nume_materie;
        in>>e1.data_examen;
        int nr_studenti;
        in>>nr_studenti;
        date_student *s;
        for( int i = 0; i < nr_studenti; i++)
        {
            in>> *s;
        }
        return in;
    }

    friend ostream &operator<<(ostream &out, examen &e2){
        out<<e2.nume_materie<<" "<<e2.data_examen<<endl;
        for(auto & i : e2.v){
            out << i;
        }
        return out;
    }
};

int main(){
    ifstream fin("citire.in");
    examen E;
    date_student c;
    fin>>E;
    fin>>c;
    cout<<E;
    cout<<c;
    return 0;
}
