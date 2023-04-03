#include "head.h"
#include <iostream>
using namespace std;

int main()
{
    type1 eq1;
    eq1.Get_answer();
    eq1.show();

    type2 eq2(5.0);
    eq2.Get_answer();
    eq2.show();

    return 0;
}