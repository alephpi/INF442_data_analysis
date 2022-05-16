#include <iostream>
using namespace std;

int DecodeMonth(char c){
    return c - 64;
}

int DecodeDay(char c){
    return c - 81;
}

int DecodeYear(char c){
    return c - 64 + 1995;
}

int main()
{
    char date[4];
    cout << "Please enter the four digits date code: ";
    cin >> date;
    int Month = DecodeMonth(date[0]);
    int Day10 = DecodeDay(date[1]);
    int Day1 = DecodeDay(date[2]);
    int Year = DecodeYear(date[3]);
    cout << "The date is: " << Month << "/" << Day10*10 + Day1 << "/" << Year << endl;
    return 0;
}
