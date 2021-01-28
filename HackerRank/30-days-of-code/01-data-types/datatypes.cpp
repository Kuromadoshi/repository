#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    // Print the sum of both integer variables on a new line.
    // Print the sum of the double variables on a new line.
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    int i2;
    double d2;
    string s2;

    // solution 1 (c++ method)
    
    cin >> i2 >> d2;
    getline(cin >> ws, s2);

    cout << i + i2 << endl;
    cout << fixed << setprecision(1) << d + d2 << endl;
    cout << s+s2 << endl;
    
    
    // solution 2 (c melhod)
    /*
    char s3 [60];
    
    scanf("%d", &i2);
    scanf("%lf", &d2);
    scanf(" %[^\n]", s3);
    
    s2 = string(s3);
   
    printf("%d\n", i2+i);
    printf("%.1f\n", d2+d);    
    printf("%s\n", (s+s2).c_str());
    */

    return 0;
}