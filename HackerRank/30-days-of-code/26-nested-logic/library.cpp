#include <iostream>

using namespace std;

class Date
{
public:
    int day;
    int month;
    int year;
    Date (int d, int m, int y)
    {
        this->day = d;
        this->month = m;
        this->year = y;
    }
    void display ()
    {
        cout << day << " " << month << " " << year << endl;
    }
};

int calculateFine (Date r, Date e)
{
    if (r.year > e.year)
    return 10000;
    if (r.year == e.year && r.month > e.month)
    return (r.month - e.month) * 500;
    if (r.month == e.month && r.day > e.day)
    return (r.day - e.day) * 15;
    return 0;
}

int main ()
{
    int d, m, y;
    cin >> d >> m >> y;
    Date date_returned(d, m, y);
    cout << "date returned: ";
    date_returned.display();
    cin >> d >> m >> y;
    Date date_expected(d, m, y);
    cout << "date expected: ";
    date_expected.display();
    cout << calculateFine(date_returned, date_expected) << " Hackos" << endl;
    return 0;
}
