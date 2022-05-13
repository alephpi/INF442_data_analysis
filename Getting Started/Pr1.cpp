#include <iostream>
using namespace std;

int main() {
  int input_var = 0;
  float temperature = 0;
  do {
    cout << "Number of chirps:";
    if (!(cin >> input_var)) {
      cin.clear(); //recover from the error state
      cin.ignore(10000,'\n'); //ignore the input in the buffer

      cout << "You entered a non-numeric(or exceeding the int bound). Please try again." << endl;
      continue;
    }
    if (input_var != -1) {
      temperature = (input_var + 40)/(4.0f);
      cout << "The temperature is:" << temperature << " degrees." << endl;
    }
  } while (input_var != -1);
  cout << "all done!" << endl;
  return 0;
}