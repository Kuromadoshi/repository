#include <cstdio>
#include <cmath>

const double pi = 4*atan(1);

int main ()
{
	double x=0, y=0;  	// x, y coordinates
	double az=pi/2;		// azimuth in rad
	char action;		// navigation instruction
	int  value;			// integer input value
	
	while(scanf(" %c%d", &action, &value)==2)
	{
		switch(action)
		{
			case 'N': y+=value; break;
			case 'S': y-=value; break;
			case 'E': x+=value; break;
			case 'W': x-=value; break;
			case 'L': az-=value/180.0*pi; break;
			case 'R': az+=value/180.0*pi; break;
			case 'F': x+=value*sin(az); y+=value*cos(az); break;
		}
	}
	printf("%lf\n",std::abs(x)+std::abs(y));
	return 0;
}