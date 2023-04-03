#include "head.h"

using namespace std;

void type1::Get_answer() {
    cout << "Ответом является любое значение Х" << endl;
}

void type1::show() {
    cout << "Уравнение 0 = 0" << endl;
}

type2::type2(double a1) {
    A = a1;
}

void type2::Get_answer() {
    cout << "Ответом является Х = 0" << endl;
}

void type2::show() {
    cout << "Уравнение " << A << "*x^2 = 0" << endl;
}