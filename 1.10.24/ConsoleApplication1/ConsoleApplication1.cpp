#include <iostream>
using namespace std;
class Pojazd {
public:
	string nazwa;
	int predkosc;
	void jedz() { cout << "pojazd jedzie " << this->nazwa << endl; }

};
class Samochod : public Pojazd {
public:
	int liczbadrzwi;
};
int main()
{
	cout << "zadanie 2\n";
	Samochod fiat;
	fiat.nazwa = "fiat 126p";
	fiat.predkosc = 120;
	fiat.liczbadrzwi = 3;
	fiat.jedz();
	cout << fiat.liczbadrzwi << endl << fiat.predkosc << endl;
	return 0;
}
