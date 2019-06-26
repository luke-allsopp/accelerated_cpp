//ask a persons name and return a greeitng + fancy framed name
#include <iostream>
#include <string> 

int main()
{
	std::cout << "Please enter your first name: ";
	std::string name;
	std::cin >> name;

	// build the message you intend to write
	const std::string greeting = "sup " + name + " ya fuck, wheres me fuking money";

	//build the 2nd/4th lines of output
	const std::string spaces(greeting.size(), ' '); 
	const std::string second = "* " + spaces + " *";
	
	//build the 1st and 5th lines
	const std::string first(second.size(), '*');
	
	//write it all out
	std::cout << std::endl;
	std::cout << first << std::endl; 
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}	
