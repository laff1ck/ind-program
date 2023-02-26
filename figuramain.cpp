#include <iostream>
#include "figure.h"

using namespace std;

int main()
{
	figure A;
	figure B;
	figure C;

	float X1, X2, X3, X4, Y1, Y2, Y3, Y4;

	cout << "vvodim cordinati figuri A ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	A.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "vvodim cordinati figuri B ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	B.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "vvodim cordinati figuri C ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	C.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "parametri figuri A: "; A.show();
	cout << "parametri figuri B: "; B.show();
	cout << "parametri figuri C: "; C.show();

	cout << "\n";

	if (A.is_prug()) cout << "figure A ento pryamougolnik\n";
	if (B.is_prug()) cout << "figure B ento pryamougolnik\n";
	if (C.is_prug()) cout << "figure C ento pryamougolnik\n";

	cout << "\n";

	if (A.is_square()) cout << "figure A ento kvadrat\n";
	if (B.is_square()) cout << "figure B ento kvadrat\n";
	if (C.is_square()) cout << "figure C ento kvadrat\n";

	cout << "\n";

	if (A.is_romb()) cout << "figure A is romb\n";
	if (B.is_romb()) cout << "figure B is romb\n";
	if (C.is_romb()) cout << "figure C is romb\n";

	cout << "\n";

	if (A.is_in_circle()) cout << "circle mojet bit opisan vokrug figuri A\n";
	if (B.is_in_circle()) cout << "circle mojet bit opisan vokrug figuri B\n";
	if (C.is_in_circle()) cout << "circle mojet bit opisan vokrug figuri C\n";

	cout << "\n";

	if (A.is_out_circle()) cout << "figura A mojet bit vpisana v circle\n";
	if (B.is_out_circle()) cout << "figura B mojet bit vpisana v circle;
		if (C.is_out_circle()) cout << "figura C mojet bit vpisana v circle\n";
}