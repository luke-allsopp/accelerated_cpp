#include <iostream>
#include <string>

//reference the standard libs used
using std::cin;     using std::endl;
using std::cout;    using std::string;

int main ()
{

//ask for the persons name
cout << "Fook'n give us yer name ya slapper: ";

//read response
string name;
cin >> name; 

//build the message
const string greeting = "Sup, " + name + " ya fook'n weak dawg";

//padding config - number of blanks surrounding greeting
const int pad = 1; 

//config - rows and columns to write
const int rows = pad * 2 + 3; 
const string::size_type cols = greeting.size() + pad * 2 + 2;

//write blank line to seperate input from output
cout<<endl;

//write rows of output
//invariant :there have been r rows so far 
for (int r = 0; r != rows; ++r){

    string::size_type c = 0;

    //invariant: there have been C characters in the currnt row so far.

    while (c != cols) {

        //check its time for the greeting
        if  (r == pad + 1 && c == pad + 1) {
        cout<<greeting; 
        c+=greeting.size();
        }else{
            //are we on the border?
            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                cout<<"*";
            else
                cout<<" ";
            ++c;
        }
   }

   cout<<endl;

}

return 0;

}
