#include <iostream>
using namespace std;
class Figura {
public:
	virtual double obliczPole()=0;
};
class kwadrat : public Figura {
private:
	double bok;
public:
	kwadrat(double bok) { this->bok = bok; }
	double obliczPole() override { return this->bok * this->bok; }
};
class kolo : public Figura {
private:
	double promien;
public:
	kolo(double r) : promien(r) {};
	double obliczPole() override { return 3.14 * this->promien * this->promien; }
};
int main()
{
	cout << "zadanie 3\n";
	return 0;
}
