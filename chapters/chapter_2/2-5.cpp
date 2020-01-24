#include <iostream>
#include <string>

//reference the standard libs used
using std::cin;     using std::endl;
using std::cout;    using std::string;

int main ()
{

//ask for the shape choice
cout << "triangle, square or rectangle? \n";
string shapeType;
cin >> shapeType;

if(shapeType == "triangle") {
    cout << "   *   " << endl;
    cout << "  * *  " << endl;
    cout << " * * * " << endl;

}if(shapeType == "square") {
    cout << "  * * *  " << endl;
    cout << "  *   *  " << endl;
    cout << "  * * *  " << endl;
    
}if(shapeType == "rectangle") {

    cout << "  * * * * *  " << endl;
    cout << "  *       *  " << endl;
    cout << "  * * * * *  " << endl;
    
}if(shapeType != "triangle" && shapeType != "square" && shapeType != "rectangle")
    cout << "ERROR" << endl;

return 0;
}
