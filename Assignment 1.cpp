#include <iostream>
#include <stdlib.h>    
#include <time.h>
using namespace std;
int main () {

int lcm;
srand  (time(NULL));
int rand1 = rand() % 10 + 1;
int rand2 = rand() % 20 + 10;
int input;
string user;
cout <<"What is your name?"<<endl;
cin >> user;
cout << "\nHello " << user << "!  Welcome to the LCM Game. \n" ;
cout << "Call you tell me what is the LCM of " << rand1 << " and " << rand2<<"?";
cin >> input ;
    lcm = (rand1 > rand2) ? rand1 : rand2;    
      while(true) {
        if( lcm%rand1 == 0 && lcm%rand2 == 0 ) 
        {
            if (input == lcm)
            {
                cout << "That is correct, Congratulations!" ;
                break;
            }
            else
            {
                cout << "Incorrect. The LCM is: " << lcm << endl;
                break;
            }
        }
    lcm++;
    }

return 0;

}
