#include <iostream>
#include <string>
using namespace std;
class Postac {
public:
    virtual void prezentujPostac() = 0;
};
class Krasnal : public Postac {
public:
    void prezentujPostac() override {
        cout << "Jestem Krasnalem.\n";
    }
};
class Ksiezniczka : public Postac {
public:
    void prezentujPostac() override {
        cout << "Jestem Ksiezniczka.\n";
    }
};
class Ogr : public Postac {
public:
    void prezentujPostac() override {
        cout << "Jestem Ogrem.\n";
    }
};
int main()
{
    Krasnal krasnal;
    Ksiezniczka ksiezniczka;
    Ogr ogr;

    krasnal.prezentujPostac();
    ksiezniczka.prezentujPostac();
    ogr.prezentujPostac();

    return 0;
}