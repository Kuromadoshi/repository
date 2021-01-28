#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
	int  min;
	int  max;
	char let;
	char psw[32];
	
	int vcount = 0; // number of valid passwords
	int lcount = 0; // number of letters in a password

	while (scanf("%d-%d %c: %[^\n]", &min, &max, &let, psw)==4)
	{
		lcount = 0;
			
		for (int i = 0; psw[i] ; ++i)
			if (psw[i] == let) ++lcount;
		
		if (lcount >= min && lcount <= max) ++vcount;
	}
	printf("%d\n", vcount);
	return 0;
}