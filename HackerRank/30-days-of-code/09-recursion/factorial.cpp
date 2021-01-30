#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) 
{
    int fact = 1;
    for (int i = 0; i < n; ++i)
    {
        fact *= (n-i);
    }
    return fact;
}

int main()
{
	//for some reason the fout funcion is not working on g++
	//but works fine in the online compiler...

    //ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);
	
	//using cout instead.
	
	cout << result << "\n";

    //fout << result << "\n";

    //fout.close();

    return 0;
}
