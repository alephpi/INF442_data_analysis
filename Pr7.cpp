#include <iostream>
using namespace std;

int process(int n){
    if (n % 2 == 1)
    {
        if (n < 9)
        {
            n += 11;
        }
        else if (n > 10)
        {
            n -= 11;
        }
        
    }
    return n;
}
int main(int argc, char const *argv[])
{
    int num;
    cout << "input a 3-digit number: ";
    cin >> num;
    int A = num / 100;
    int C = num % 10;
    int B = (num / 10) % 10;

    int ABC = num;
    int BCA = B * 100 + C * 10 + A;
    int CAB = C * 100 + A * 10 + B;
    int X = ABC % 11;
    int Y = BCA % 11;
    int Z = CAB % 11;
    int XY = X + Y;
    int YZ = Y + Z;
    int ZX = Z + X;
    XY = process(XY);
    YZ = process(YZ);
    ZX = process(ZX);
    cout << "A: " << XY/2 << endl;
    cout << "B: " << YZ/2 << endl;
    cout << "C: " << ZX/2 << endl;


    return 0;
}
