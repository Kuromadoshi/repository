#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        for (int j = 0; j < int(s.length()); j+=2) cout << s[j];
        cout << " ";
        for (int j = 1; j < int(s.length()); j+=2) cout << s[j];
        cout << endl;
    }
        
    return 0;
}
