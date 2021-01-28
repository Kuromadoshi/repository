#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
	int  pos1;
	int  pos2;
	char let;
	char psw[32];
	
	int vcount = 0; // number of valid passwords
	int lcount = 0; // number of letters in specific position

	while (scanf("%d-%d %c: %[^\n]", &pos1, &pos2, &let, psw)==4)
	{
		lcount = 0;
			
		if (psw[pos1-1] == let) ++lcount;
		if (psw[pos2-1] == let) ++lcount;
		
		if (lcount == 1) ++vcount;
	}
	printf("%d\n", vcount);
	return 0;
}