#include <cstdio>

using namespace std;

int main ()
{
	char line [32];
	int x = 0;
	int trees = 0;
	
	while (scanf(" %[^\n]", line)==1)
	{
		if (line[x] == '#') ++trees;
		x += 3;
		if (x > 30) x -= 31;
	}
	printf("trees: %d\n", trees);
	return 0;
}