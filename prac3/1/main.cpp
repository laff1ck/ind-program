#include "eq2.h"

using namespace std;

int main()
{
	eq2 eq2_1 = eq2();
	eq2_1.set(1, 2, 3);
	cout << eq2_1.find_X() << endl;
	cout << eq2_1.find_Y() << endl;
	eq2 eq2_2 = eq2(1, 2, 3);
	eq2 eq2_3 = eq2_1 + eq2_2;
	cout << eq2_3.find_X() << endl;
	cout << eq2_3.find_Y() << endl;

}