#include <iostream>
#include <iomanip> 
using namespace std;

void convertTime(string time24) {
    int hour = stoi(time24.substr(0, 2));
    int minute = stoi(time24.substr(3, 2));

    string period;
    if (hour < 12)
        period = "AM";
    else
        period = "PM";

    if (hour == 0) {
        hour = 12; // Special case: 00:00 should be 12:00 AM
    } else if (hour > 12) {
        hour -= 12;
    }

    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string time24;
        cin >> time24;
        convertTime(time24);
    }
    return 0;
}
