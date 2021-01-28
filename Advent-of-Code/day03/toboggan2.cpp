#include <cstdio>

using namespace std;

int treecheck (char line [32], int x, int y, int n)
{
	int tree = 0;
	int posx = (n * x / y) % 31;
	
	if (n % y == 0)
		if (line[posx]=='#') tree = 1;
	
	return tree;
}


int main ()
{
	char line [32];
	int n = 0;
	int t[5];
	
	for (int i = 0 ; i < 5 ; ++i) t[i] = 0;
	
	while (scanf(" %[^\n]", line)==1)
	{
		t[0] += treecheck (line, 1, 1, n);
		t[1] += treecheck (line, 3, 1, n);
		t[2] += treecheck (line, 5, 1, n);
		t[3] += treecheck (line, 7, 1, n);
		t[4] += treecheck (line, 1, 2, n);
		++n;
	}
	
	long p = 1;
	
	for (int i = 0 ; i < 5 ; ++i)
	{
		printf("slope %d: %d\n", i + 1, t[i]);
		p *= long(t[i]);
	}

	printf("result : %ld\n", p);

	return 0;
}