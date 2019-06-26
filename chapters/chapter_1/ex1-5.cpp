//exercise 1-5

#include <iostream>
#include <string>

int main ()
{
		
	{const std::string s = "a string";
	 std::string x = s + ", really";
	//had to nestle declearations better 
	 std::cout << s << std::endl;
	 std::cout << x << std::endl; 
	}	
	return 0; 
}
