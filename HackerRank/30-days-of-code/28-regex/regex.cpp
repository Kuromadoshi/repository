#include <iostream>
#include <algorithm>
#include <string>
#include <regex>

using namespace std;

int main ()
{
    int n;
    string name, email;
    regex rg ("^[a-z.]+@gmail\\.com$");
    vector <string> database;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> name >> email;
        if (regex_match (email, rg))
        {
            database.push_back(name);
        }
    }

    sort(database.begin(), database.end());

    for (unsigned int i = 0; i < database.size(); ++i)
    {
        cout << database[i] << endl;
    }
    return 0;
}
