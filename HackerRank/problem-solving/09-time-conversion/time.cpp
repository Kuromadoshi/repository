#include <iostream>
#include <string>

using namespace std;

// Complete the timeConversion function below.

string timeConversion (string s)
{
    string hour = s.substr(0,2);
    string mins = s.substr(2,6);
    string time = s.substr(8,2);
    if (stoi(hour) < 12 && time == "PM")
    {
        hour = to_string(stoi(hour) + 12)   ;
    }
    else if (hour == "12" && time == "AM")
    {
        hour = "00";
    }
    string t = hour + mins;
    return t;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}
