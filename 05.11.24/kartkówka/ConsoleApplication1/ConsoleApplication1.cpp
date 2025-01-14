#include <iostream>
#include <string>
using namespace std;
class CPU {
public:
	double mocObliczeniowa;
	CPU(double moc) : mocObliczeniowa(moc) {
		this->mocObliczeniowa = moc;
	}
};
class RAM {
public:
	int pojemnosc;
	RAM(int pojemnosc) : pojemnosc(pojemnosc) {
		this->pojemnosc = pojemnosc;
	}
};
class SmartDevice {
private:
	string model;
	CPU cpu;
	RAM ram;
public:
	SmartDevice(const string& model,const CPU& cpu,const RAM& ram) : model(model), cpu(cpu), ram(ram) {
		this->model = model;
		this->cpu = cpu;
		this->ram = ram;
	}
	void device() {
		cout << "model urzadzenia: " << model << endl;
		cout << "moc obliczeniowa: " << cpu.mocObliczeniowa << " GHz" << endl;
		cout << "pojemnosc RAM: " << ram.pojemnosc << " GB" << endl;
	}
};

int main() {
	CPU cpu(2.5);
	RAM ram(8);
	SmartDevice smartDevice("SmartPhone", cpu, ram);
	smartDevice.device(); 

    return 0;
}