#include <iostream>

using namespace std;

int main() {

int numOne;
int numTwo;
int x;

cout << "Imma compare some numbers for you \nplease enter your first number: " << endl;
cin >> numOne;

if(!cin)
    {
    cout << "can you trype a number pls" << endl;
    return -1;
    }

cout << "please enter your second number: " << endl; 
cin >> numTwo;

if(!cin)
    {
    cout << "error" << endl;
    return -1;    
    }


    (numOne > numTwo) ? x = 1 : x = 2;{
        
        if(x == 1){
            cout << "number one is larger (" << numOne <<  ")" << endl;
            return 0;

        }if(x == 2) {
            cout << "number two is larger (" << numTwo << ")" << endl;
            return 0;

        }else{
            cout << "ERROR";
            return -1;
        }
            
    }

}
