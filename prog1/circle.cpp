#include <cmath>
#include <iostream>
#include "circ.h"
using namespace std;
circle::circle(float r, float x, float y)
{
	radius = r;
	x_c = x;
	y_c = y;
}
void circle::set_circle(float r, float x, float y)
{
	radius = r;
	x_c = x;
	y_c = y;
}
float circle::square() {
	return radius * radius * 3.14;
}
bool circle::triangle_around(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	float S = sqrt(p * (p - a) * (p - b) * (p - c));
	return a * b * c / 4 / S == radius;
}
bool circle::triangle_in(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	float S = sqrt(p * (p - a) * (p - b) * (p - c));
	return radius == S / p;
}
bool circle::check_circle(float r, float x_cntr, float y_cntr)
{
	float dist = sqrt((x_c - x_cntr) *(x_c - x_cntr)  + (y_c - y_cntr) * (y_c - y_cntr));
	return dist - radius - r <= 0;
}
