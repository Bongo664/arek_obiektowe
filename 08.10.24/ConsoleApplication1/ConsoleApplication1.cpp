#include <iostream>
using namespace std;
class Zwierze {
public:
	Zwierze() { cout << "Zwierze stworzone" << endl; }
	~Zwierze() { cout << "Zwierze zniszczone" << endl; }
};
int main()
{
    cout << "konstr, destr\n";
	Zwierze z;
    return EXIT_SUCCESS;
}
