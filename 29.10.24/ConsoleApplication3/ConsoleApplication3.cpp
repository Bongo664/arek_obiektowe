#include <iostream>
#include <string>
using namespace std;
class Autor {
public:
    string first_name;
    string last_name;
    Autor(const string& fn, const string& ls) {
        this->first_name = fn; this->last_name = ls;
    }
    void display() {
        cout << "Imie autora: " << first_name << ", " << "Nazwisko autora: " << last_name << endl;
    }
};
class Ksiazka {
private:
    string tytul;
    Autor autor;
public:
    Ksiazka(const string& tytul, const Autor& autor) : autor(autor){
		this->tytul = tytul; this->autor = autor;
    }

    void display() {
        cout << "Tytul ksiazki: " << tytul << endl;
        autor.display();
    }
};
int main() {
    Autor autor("Arkadiusz", "Waliczek");
    Ksiazka ksiazka("Moja Ksiazka", autor);
    ksiazka.display();

    return 0;
}