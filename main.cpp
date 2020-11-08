#include <iostream>
using namespace std;
#include <string>
#include <vector>
class examen;

class date_student : public basic_string<char> {
    string nume_student;
    int grupa;
    int serie;
    int nota;
    string promovabilitate;

    friend class examen;

public:

    date_student(string nume_student = "-", int grupa = 0, int serie = 0, int nota = 0, string promovabilitate = "-") {
        this->nume_student = nume_student;
        this->grupa = grupa;
        this->serie = serie;
        this->nota = nota;
        this->promovabilitate = promovabilitate;
    }

    date_student(date_student &student) {
        this->nume_student = student.nume_student;
        this->grupa = student.grupa;
        this->serie = student.serie;
        this->nota = student.nota;
        this->promovabilitate = student.promovabilitate;
    }

    ~date_student() = default;

    string get_nume () {
        return nume_student;
    }

    int get_serie () {
        return serie;
    }

    int get_grupa () {
        return grupa;
    }

    float get_nota () {
        return nota;
    }

    friend istream &operator>>(istream& in, date_student& s1){
        in >> s1.nume_student;
        in >> s1.grupa;
        in >> s1.serie;
        in >> s1.nota;
        return in;
    }

    friend ostream &operator<<(ostream &out, date_student &s2) {
        out << "Studentul " << s2.nume_student << " este " << s2.promovabilitate << endl;
        return out;
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

class examen {
    string nume_materie;
    string data_examen;
    vector<date_student> v;

public:

    examen() = default;

    ~examen() = default;

    friend istream &operator>>(istream &in, examen &e1){
        in>>e1.nume_materie;
        in>>e1.data_examen;
        date_student s;
        int optiune=1;
        while(optiune==1){
            in>>s;
            e1.v.push_back(s);
            in>>optiune;}
        return in;
    }

    friend ostream &operator<<(ostream &out, examen &e2){
        out<<e2.nume_materie<<" "<<e2.data_examen<<endl;
        string nume;
        int grupa, serie;
        float nota;
        for(int i = 0; i < e2.v.size(); ++i)
        {
            nume = e2.v[i].get_nume();
            grupa = e2.v[i].get_grupa();
            serie = e2.v[i].get_serie();
            nota = e2.v[i].get_nota();
            out<<nume<<' '<<grupa<<' '<<serie<<' '<<nota<<endl;
        }
        return out;
    }

};

int main(){
    examen E1;
    cin>>E1;
    cout<<E1;
    date_student c;
    cin>>c;
    cout<<c;
    return 0;
}
