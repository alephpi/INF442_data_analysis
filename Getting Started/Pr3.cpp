#include <iostream>
using namespace std;

int sec = 0;
int CalcHour(){
    int Hour = 0;
    Hour = sec / 3600;
    sec = sec % 3600;
    return Hour;
}

int CalcMin(){
    int Min = 0;
    Min = sec / 60;
    sec = sec % 60;
    return Min;
}
int main()
{
    cout << "Please type the number of seconds: ";
    cin >> sec;
    cout << "Hours: " << CalcHour()<< endl;
    cout << "Minutes: " << CalcMin()<< endl;
    cout << "Seconds: " << sec << endl;
    return 0;
}
