#include <iostream>
#include <string>

int main()
{
	//ask for a persons name
	std::cout << "Please enter your first name: ";

	//read the name
	std::string name;
	std::cin >> name;

	//build the message we intend to write
	const std::string greeting = "Hello, " + name + " ya fuck";
	

	//build the second and 4th lines
	const std::string spaces(greeting.size(),' ');
	const std::string second = "*" + spaces + "*";

	//build the first and firth lines
	const std::string first(second.size(),' ');

	//write it all out
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "*" << greeting << "*" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0; 
	
}



