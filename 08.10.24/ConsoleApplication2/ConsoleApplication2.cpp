#include <iostream>
using namespace std;
static class matematyka {
public:
	static constexpr double PI = 3.14159;
	static int silnia(int n) {
		if (n <= 1) return 1;
		return n * silnia(n - 1);
	}
};
int main()
{
	cout << "\n";
}
