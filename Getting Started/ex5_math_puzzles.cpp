#include <iostream>
using namespace std;

int main(){
    for (int horse = 0; horse < 10; horse++)
    {
        for (int pig = 0; pig < 100 - horse; pig++)
        {
            int rabbit = 100 - horse - pig;
            if ((10 * horse + 3 * pig + 0.5 * rabbit == 100))
            {
                cout << "horse = " << horse << "\t" << "pig=" << pig << "\t" << "rabbit= " << rabbit << endl;
            }
            
        }
        
    }
    
}