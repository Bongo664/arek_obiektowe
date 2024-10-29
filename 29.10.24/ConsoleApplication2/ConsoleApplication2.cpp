#include <iostream>
#include <string>
using namespace std;
class Silnik {
private:
    double pojemnosc;
    int moc;
public:
    Silnik(double pojemnosc, int moc) : pojemnosc(pojemnosc), moc(moc) {}

    void wyswietl() {
        cout << "Pojemnosc silnika: " << pojemnosc << " litry, Moc: " << moc << " hp" << endl;
    }
};
class Samochod {
private:
    string marka;
    string model;
    Silnik silnik;

public:
    Samochod(const string& marka, const string& model, const Silnik& silnik)
        : marka(marka), model(model), silnik(silnik) {}

    void wyswietl() {
        cout << "Samochod: " << marka << " " << model << endl;
        silnik.wyswietl();
    }
};
int main() {
    Silnik silnik(1.6, 100);
    Samochod samochod("Toyota", "Corolla", silnik);
    samochod.wyswietl();

    return 0;
}