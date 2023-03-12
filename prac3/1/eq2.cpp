#include "eq2.h"

eq2::eq2(double a1, double b1, double c1)
{
    a=a1;
    b=b1;
    c=c1;
    d= b*b - 4*a*c;
}
void eq2::set(double a1, double b1, double c1)
{
    a=a1;
    b=b1;
    c=c1;
    d= b*b - 4*a*c;
}
double eq2::find_X()
{
    if (d<0)
    {
        std::cout << "Net resheniy" <<std:: endl;
        return 0;
        
    }
    else if (d==0)
    {
        return (-1*b- sqrt(d))/(2*a);
        return 0;
    }
    else
    {
        double x1,x2;
        x1= (-1*b-sqrt(d))/(2*a);
        x2= (-1*b+sqrt(d))/(2*a);
        return x1 > x2 ? x1 : x2;
    }   
    
}
double eq2::find_Y(double x1)
{
    return( a*x1*x1+b*x1+c);
}
eq2 operator + (eq2 & x, eq2 & y)
{
	eq2 vrem = eq2(x.a+y.a, x.b+y.b, x.c+y.c);
	return vrem;
}