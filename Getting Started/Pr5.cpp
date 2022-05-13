#include <iostream>
using namespace std;

int reverse(int num){
    int digit_count = 0;
    int digits[8];
    //int power10 = 10;
    int n = 0;
    for (int i = 0; i < 8; i++)
    {
        digits[i] = 0;
    }
    
    do
    {
        digits[n] = num % 10;
        num = num / 10;
        n++; 
    } while (n < 8 and num != 0);
    int rev_num = 0;
    int rev_n = 0;
    do
    {
        rev_num = rev_num * 10;
        rev_num = rev_num + digits[rev_n];
        rev_n ++;
    }while (rev_n < n);
    
    return rev_num;
}

int main()
{
    int num;
    cout << "input number: ";
    cin >> num;
    
    int rev_num = reverse(num);
    cout << "reverse it: " << rev_num << endl;
    int sub = num - rev_num;
    cout << "substract: " << num << "-" << rev_num << "=" << sub << endl;
    int rev_sub = reverse(sub);
    cout << "reverse it: " << rev_sub << endl;
    int add = sub + rev_sub;
    cout << "add: " << rev_sub << "+" << sub << "=" << add << endl;
    return 0;

}
