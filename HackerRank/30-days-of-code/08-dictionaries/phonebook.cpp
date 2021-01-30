#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    map <string, string> phoneBook;
    string name;
    string number;

    int n = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> name >> number;
        phoneBook.insert(pair<string, string> (name, number));
    }
    
    char cname [20];
    while (scanf (" %s", cname)==1)
    {
        name = string(cname);
        if (phoneBook.find(name)==phoneBook.end()) cout << "Not found" << endl; 
        else cout << phoneBook.find(name)->first << "=" << phoneBook.find(name)->second << endl;
    }
       
    return 0;
}
