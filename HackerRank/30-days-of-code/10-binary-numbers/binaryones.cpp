#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int cnt = 0;
    int max = 0;
    
    while (n > 0)
    {
        if (n % 2 == 1) cnt++;
        else cnt = 0;
        if (cnt > max) max = cnt;
        n = n / 2;
    }
    cout << max;

    return 0;
}
