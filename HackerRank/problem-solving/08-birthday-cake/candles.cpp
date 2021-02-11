#include <iostream>
#include <vector>

using namespace std;

int birthdayCakeCandles(vector <int> candles)
{
    int tallest;
    int len = candles.size();
    int counter = 0;
    sort(candles.begin(), candles.end());
    tallest = candles[len-1];
    for (int i = len - 1; i >= 0; --i)
    {
        if (candles[i] == tallest) counter++;
        else return counter;
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
