#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int W;
    
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if (N % 2 != 0) W = 1;
    else
    if (N >= 2 && N <= 5) W = 0;
    else
    if (N >= 6 && N <= 20) W = 1;
    else W = 0;
    
    if (W == 1) printf("Weird");
    else printf ("Not Weird");
    
    return 0;
}
