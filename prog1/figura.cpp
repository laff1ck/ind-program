#include "figure.h"


bool figure::is_prug()
{
	return (ugol(x1, y1, x2, y2, x1, y1, x4, y4) == 90 &&
		ugol(x2, y2, x1, y1, x2, y2, x3, y3) == 90 &&
		ugol(x3, y3, x2, y2, x3, y3, x4, y4) == 90 &&
		ugol(x4, y4, x1, y1, x4, y4, x3, y3) == 90);
}
bool figure::is_square()
{
	return ((ugol(x1, y1, x2, y2, x1, y1, x4, y4) == 90 &&
		ugol(x2, y2, x1, y1, x2, y2, x3, y3) == 90 &&
		ugol(x3, y3, x2, y2, x3, y3, x4, y4) == 90 &&
		ugol(x4, y4, x1, y1, x4, y4, x3, y3) == 90) &&

		(dist(x1, y1, x2, y2) == dist(x2, y2, x3, y3) &&
			dist(x1, y1, x2, y2) == dist(x3, y3, x4, y4) &&
			dist(x1, y1, x2, y2) == dist(x4, y4, x1, y1))
		);
}
bool figure::is_romb()
{
	return ((dist(x1, y1, x2, y2) == dist(x2, y2, x3, y3) &&
		dist(x1, y1, x2, y2) == dist(x3, y3, x4, y4) &&
		dist(x1, y1, x2, y2) == dist(x4, y4, x1, y1)));
}
bool figure::is_in_circle()
{
	return (dist(x1, y1, x2, y2) + dist(x3, y3, x4, y4) == dist(x2, y2, x3, y3) + dist(x4, y4, x1, y1));
}
bool figure::is_out_circle()
{
	return ((ugol(x1, y1, x2, y2, x1, y1, x4, y4) + ugol(x3, y3, x2, y2, x3, y3, x4, y4) == 180) &&
		(ugol(x2, y2, x1, y1, x2, y2, x3, y3) + ugol(x4, y4, x1, y1, x4, y4, x3, y3) == 180));
}
