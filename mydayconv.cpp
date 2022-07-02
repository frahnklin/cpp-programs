#include <iostream>
using namespace std;


int main()
{
    string daysOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    int dayNum;
    string convDay;

    cout << "Enter number:";
    cin >> dayNum;

    if (0 <= dayNum && dayNum <= 6) {
        convDay = daysOfWeek[dayNum];
        cout << convDay;
    } else if (0 > dayNum || dayNum > 6) {
        cout << "Invalid day!";
    }

    return 0;
}
