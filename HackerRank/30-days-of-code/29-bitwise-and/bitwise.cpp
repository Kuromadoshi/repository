#include <iostream>

using namespace std;

int evaluate (int n, int k)
{
    int bitwise_and;
    int maximum_possible = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i != j)
            {
                bitwise_and = i & j;
                if (bitwise_and + 1 == k) return bitwise_and;
                if (bitwise_and < k)
                maximum_possible = max (maximum_possible, bitwise_and);
            }
        }
    }
    return maximum_possible;
}


int main ()
{
    int t;
    int n, k;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> n >> k;
        cout << evaluate (n, k) << endl;
    }

    return 0;
}
