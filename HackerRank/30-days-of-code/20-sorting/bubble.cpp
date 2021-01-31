//#include <bits/stdc++.h> this library is no available on mac?
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++)
    {
    	cin >> a[a_i];
    }
    // Write Your Code Here:
    int numSwaps = 0;
    int loopSwaps = 0;
    for (int i = 0; i < n; ++i)
    {
        loopSwaps = 0;
        for (int j = 0; j < n - 1; ++j)
        {
            if (a[j] > a[j+1])
            {
                swap (a[j], a[j+1]);
                loopSwaps++;
            }
        }
        if (loopSwaps == 0) break;
        numSwaps+=loopSwaps;
    }
    cout << "Array is sorted in " << numSwaps << " swaps.\n";
    cout << "First Element: " << a[0] << "\n";
    cout << "Last Element: " << a[n-1] << "\n";
    return 0;
}
