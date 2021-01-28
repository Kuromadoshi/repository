#include <cstdio>
#include <cmath>

const double pi = 4*atan(1);

int main ()
{
	double wx=10, wy=1;	// waypoint coordinates
	double x=0, y=0;  	// x, y coordinates
	char action;		// navigation instruction
	int  value;			// integer input value
	
	while(scanf(" %c%d", &action, &value)==2)
	{
		switch(action)
		{
			case 'N': wy+=value; break;
			case 'S': wy-=value; break;
			case 'E': wx+=value; break;
			case 'W': wx-=value; break;
			case 'F': x+=value*wx; y+=value*wy; break;
			case 'R':
				value=-value;
			case 'L':
				double angle = value*pi/180.0;
				double nwx = wx*cos(angle) - wy*sin(angle); 
				double nwy = wy*cos(angle) + wx*sin(angle);
				wx = nwx;
				wy = nwy;
				break;
		}
	}
	printf("%lf\n",std::abs(x)+std::abs(y));
	return 0;
}