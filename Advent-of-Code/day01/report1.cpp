#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
	int ex[240];
	
	int s = 0;
	int p = 0;
	
	while (scanf("%d", &ex[s])==1) ++s;
	
	for (int i = 0; i < s ; ++i)
		for (int j = 0; j < s ; ++j)
			if (ex[i] + ex[j] == 2020)
				p = ex[i] * ex[j];
	
	printf("%d\n", p);
	return 0;
}