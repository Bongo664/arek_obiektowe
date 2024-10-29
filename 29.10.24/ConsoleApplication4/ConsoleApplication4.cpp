#include <iostream>
#include <string>
using namespace std;
class Screen {
public:
    int width;
    int height;
    Screen(int w, int h) : width(w){
	this->width = w; this->height = h;
    }
};
class Laptop {
private:
    string model;
    Screen screen;
public:
    Laptop(const string& model, const Screen& screen) : model(model), screen(screen) {}
    void display() {
        cout << "Model Laptopu: " << model << endl;
        cout << "Rozdzielczosc ekrenu: " << screen.width << "x" << screen.height << endl;
    }
};
int main() {
    Screen screen(1920, 1080);
    Laptop laptop("Dell XPS 13", screen);
    laptop.display();
    return 0;
}