#include <iostream>
#include <cmath>

using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    int sr = sqrt(n);
    for (int i = 2; i <= sr; ++i)
    {
        if (n%i == 0) return false;
    }
    return true;
}

int main ()
{
    int T,n;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        cin >> n;
        if (isPrime(n)) cout << "Prime" << endl;
        else cout << "Not prime" << endl;
    }
    return 0;
}
