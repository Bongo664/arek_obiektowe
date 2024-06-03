#include "MyForm.h"
using namespace Timer;
[STAThreadAttribute]
int main() {
	MyForm mf;
	mf.ShowDialog();
	return 0;
}