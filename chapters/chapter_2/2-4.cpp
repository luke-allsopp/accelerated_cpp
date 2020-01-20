#include <iostream>
#include <string>

//reference the standard libs used
using std::cin;     using std::endl;
using std::cout;    using std::string;

int main ()
{

//ask for the persons name
cout << "Fook'n give us yer name ya slapper: ";
string name;
cin >> name; 

// ask for rows and cols padding
cout << "how many padded rows?"; 
int row_pad;
cin >> row_pad;

cout << "how many padded cols?";
int col_pad;
cin >> col_pad;


//build the message
const string greeting = "Sup, " + name + " ya fook'n weak dawg";

//REMOVED: padding config - number of blanks surrounding greeting
//const int row_pad = 1;
//const int col_pad = 4;

//config - rows and columns to write
const int rows = row_pad * 2 + 3; 
const string::size_type cols = greeting.size() + col_pad * 2 + 2;

//write blank line to seperate input from output
cout<<endl;

//write rows of output
//invariant :there have been r rows so far 
for (int r = 0; r != rows; ++r){

    string::size_type c = 0;

    //invariant: there have been C characters in the currnt row so far.

    while (c != cols) {

        //check its time for the greeting
        if  (r == row_pad + 1 && c == col_pad + 1) {
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
