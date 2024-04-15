#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Medium {
public:
    virtual void wypozycz() = 0;
    virtual void oddaj() = 0;
};

class Ksiazki : public Medium {
public:
    Ksiazki(const string& title) : title(title) {}
    void wypozycz() {
        cout << "Wypozyczono ksiazke: " << title << endl;
    }
    void oddaj() {
        cout << "Oddano ksiazke: " << title << endl;
    }
    string getTitle() const { return title; }
private:
    string title;
};

class Filmy : public Medium {
public:
    Filmy(const string& title) : title(title) {}
    void wypozycz() {
        cout << "Wypozyczono film: " << title << endl;
    }
    void oddaj() {
        cout << "Oddano film: " << title << endl;
    }
    string getTitle() const { return title; }
private:
    string title;
};

class Muzyka : public Medium {
public:
    Muzyka(const string& title) : title(title) {}
    void wypozycz() {
        cout << "Wypozyczono muzyke: " << title << endl;
    }
    void oddaj() {
        cout << "Oddano muzyke: " << title << endl;
    }
    string getTitle() const { return title; }
private:
    string title;
};

int main()
{
    vector<Medium*> wskaznik;
    string tablicaFilmy[3] = { "Film 1", "Film 2", "Film 3" };
    string tablicaMuzyka[3] = { "Muzyka 1", "Muzyka 2", "Muzyka 3" };
    string tablicaKsiazka[3] = { "Ksiazka 1", "Ksiazka 2", "Ksiazka 3" };
    int menu, ilosc;

    cout << "1-filmy, 2-muzyka, 3-ksiazki: ";
    cin >> menu;
    cout << "Ile chcesz wypozyczyc? ";
    cin >> ilosc;

    switch (menu)
    {
    case 1:
        for (int i = 0; i < ilosc; i++) {
            wskaznik.push_back(new Filmy(tablicaFilmy[i]));
            wskaznik[i]->wypozycz();
        }
        for (int i = 0; i < ilosc; i++) {
            wskaznik[i]->oddaj();
        }
        break;
    case 2:
        for (int i = 0; i < ilosc; i++) {
            wskaznik.push_back(new Muzyka(tablicaMuzyka[i]));
            wskaznik[i]->wypozycz();
        }
        for (int i = 0; i < ilosc; i++) {
            wskaznik[i]->oddaj();
        }
        break;
    case 3:
        for (int i = 0; i < ilosc; i++) {
            wskaznik.push_back(new Ksiazki(tablicaKsiazka[i]));
            wskaznik[i]->wypozycz();
        }
        for (int i = 0; i < ilosc; i++) {
            wskaznik[i]->oddaj();
        }
        break;
    default:
        cout << "Brak wybranego przedmiotu..." << endl;
        break;
    }
    for (int i = 0; i < wskaznik.size(); i++) {
        delete wskaznik[i];
    }

    return EXIT_SUCCESS;
}