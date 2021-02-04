#include <iostream>
#include <cmath>

using namespace std;

bool scanPrime (int n)
{
    if (n < 2)
    {
        cout << n << " is not prime." << endl;
        return false;
    }
    int sr = sqrt(n);
    for (int i = 2; i <= sr; ++i)
    {
        if (n%i == 0)
        {
            cout << n << " is divisible by " << i;
            cout << " therefore, it's not prime." << endl;
            return false;
        }
    }
    cout << n << " is prime." << endl;
    return true;
}

int main ()
{
    int T,n;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        cin >> n;
        scanPrime(n);
    }
    return 0;
}
