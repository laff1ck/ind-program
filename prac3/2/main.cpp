#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	int size;
	cout << "vvedite kol-vo drobey: "; cin >> size;
	cout << "\n";
	rational* arr = new rational[size];
	int a, b;

	cout << "vvedite 4islitel i 3namenatel 4erez probel \n";
	for (int i = 0; i < size; i++)
	{
		cout << "nomer drobi " << i + 1 << " : ";
		cin >> a >> b;
		(arr[i]).set(a, b);
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << "\nВывод дроби " << i + 1 << " : ";
		(arr[i]).show();
	}
	cout << "\n";

	delete[] arr;

	return 0;
}