#include <iostream>
#include "circle.h";

using namespace std;

int main()
{
	circle A(0, 0, 0);
	circle B(0, 0, 0);
	circle C(0, 0, 0);

	float x, y, r;

	cout << "x, y and radius okrujnosti A\n";
	cin >> x >> y >> r;
	A.set_circle(x, y, r);

	cout << "x, y and radius okrujnosti B\n";
	cin >> x >> y >> r;
	B.set_circle(x, y, r);

	cout << "x, y and radius okrujnosti C\n";
	cin >> x >> y >> r;
	C.set_circle(x, y, r);

	cout << "\n";

	cout << "square okrujnosti A - " << A.square() << "\n";
	cout << "square okrujnosti B - " << B.square() << "\n";
	cout << "square okrujnosti C - " << C.square() << "\n";

	float R, X, Y;
	circle D(0, 0, 0);
	cout << "x, y and radius okrujnosti \n";
	cin >> R >> X >> Y;

	D.set_circle(R,X,Y);
	if (B.check_circle(R, X, Y)) cout << "okrujnosti peresekautsya\n";
	else cout << "okrujnosti ne peresekautsya\n";

	float a, b, c;

	cout << "vvedite triangle (a,b,c)\n";
	cin >> a >> b >> c;

	if (A.triangle_around(a, b, c)) cout << "okrujnost A monjno vpisat v triangle\n";
	else cout << "okrujnost A NE monjno vpisat v triangle\n";

	if (B.triangle_around(a, b, c)) cout << "okrujnost B monjno vpisat v triangle\n";
	else cout << "okrujnost B NE monjno vpisat v triangle\n";

	if (C.triangle_around(a, b, c)) cout << "okrujnost C monjno vpisat v triangle\n";
	else cout << "okrujnost C NE monjno vpisat v triangle\n";

	if (A.triangle_in(a, b, c)) cout << "v triangle mojno vpisat okrujnost A\n";
	else cout << "v triangle NE mojno vpisat okrujnost A\n";

	if (B.triangle_in(a, b, c)) cout << "v triangle mojno vpisat okrujnost B\n";
	else cout << "v triangle NE mojno vpisat okrujnost B\n";

	if (C.triangle_in(a, b, c)) cout << "v triangle mojno vpisat okrujnost C\n";
	else cout << "v triangle NE mojno vpisat okrujnost C\n";

	return 0;
}
