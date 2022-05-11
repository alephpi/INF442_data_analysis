#include <iostream>
using namespace std;

int main(){
    srand(time(NULL));
    int num = rand() % 100;
    int input_var = 0;
    do {
    cout << "Guess the number between 0 and 99(-1 = quit): ";
    // The following line accepts input from the keyboard into
    // variable input_var.
    // cin returns false if an input operation fails, that is, if
    // something other than an int (the type of input_var) is entered.
    if (!(cin >> input_var)) {
      cin.clear(); //recover from the error state
      cin.ignore(10000,'\n'); //ignore the input in the buffer

      cout << "You entered a non-numeric(or exceeding the int bound). Please try again." << endl;
      continue;
    }
    if (input_var != -1) {
        if (input_var == num)
        {
            cout << "Right! You win!" << endl;
        }
        else if (input_var > num)
        {
            cout << "too high" << endl;
        }
        else cout << "too low" << endl;
    }
  } while (input_var != -1);
  cout << "All done." << endl;
    //cout << num << endl;
    return 0;
}