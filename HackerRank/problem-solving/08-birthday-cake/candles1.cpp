#include <iostream>
#include <vector>

using namespace std;

int birthdayCakeCandles(vector <int> candles)
{
    int len = candles.size();
    int tallest = 0;
    int counter = 0;
    for (int i = 0; i < len; ++i)
    {
        if (candles[i] > tallest)
        {
            tallest = candles[i];
            counter = 1;
        }
        else if (candles[i] == tallest) counter++;
    }
    return counter;
}

int main ()
{
    int n;
    int temp;
    vector <int> candles;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        candles.push_back(temp);
    }
    cout << birthdayCakeCandles(candles) << endl;
    return 0;
}
