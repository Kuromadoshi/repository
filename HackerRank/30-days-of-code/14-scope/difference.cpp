#include <iostream>
#include <vector>

using namespace std;

class Difference
{
private:
    vector <int> elements;
    int maxDifference;
public:
    Difference(vector<int> e)
    {
        this->elements = e;
    }
    void calculate()
    {
        int len = elements.size();
        int tmp = 0;
        int debug = 0;
        maxDifference = 0;
        for (int i = 0; i < len; ++i)
            for (int j = 0; j< len; ++j)
            {
                if (i<j)
                {
                    tmp = abs(elements[i]-elements[j]);
                    maxDifference = max(maxDifference,tmp);
                    ++debug;
                }
            }
        cout << "loops: " << debug << endl;
    }
    void displayMax ()
    {
        cout << maxDifference << endl;
    }
};

int main ()
{
    vector <int> v;
    int len = 0;
    int tmp = 0;
    cin >> len;
    for (int i = 0; i < len; ++i)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    Difference delta (v);
    delta.calculate();
    delta.displayMax();
    return 0;
}
