//napsiz clase silnik która przechowóje informacje o pojemnści silnika i jego mocy następnie stwórz klasę samochód która ma jako pole obiekt klasy silnik zaimplementuj metode która wyświetla infrmacje o samochodzie
//stwórz klase autor która przecowuje imie i nazmisko mautora. następnie zbuduj klasę książka która ma tytuł książki instancji auto dodaj metodę wyświetlania
//napisz klasę screen która przechowóje rozdzielczość ekrenu. następnie utwórz klase laptop która ma model laptopa i zawiera obiekt klasy screen dodaj metodę wyświetlającą pełne informacje o laptopie i o rozdzielczości ektranu
#include <iostream>
#include <string>
using namespace std;
class Person {
public:
	string firstName;
	string lastName;
	Address adres;
	Person(const string& fn, const string& ln, const Address& addres) {
		this->firstName = fn; this->lastName = ln; this->adres = addres;
	}
	void display() {
		cout << "Address: " << firstName << " " << lastName << " " << adres << endl;
		adres.display();
	}
};
class Address {
public:
	string city;
	string street;
	int houseNumber;
	Address() : city(""), street(""), houseNumber(0) { };
	Address(const string& c,const string& s, int hn) {
		this->city = c; this->street = s; this->houseNumber = hn;
	};
	void display() {
		cout << "Address: " << street << " " << city << " " << houseNumber << endl;
	}
};
int main()
{
	Address adres("Pszczyna", "Poniatowskiego", 2);
	Person person("Arkadiusz", "Waliczek", adres);
	person.display();
	return 0;
}
