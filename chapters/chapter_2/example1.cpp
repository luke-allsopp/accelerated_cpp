#include <iostream>
#include <string>
int main()
{
	// ask for the person's name
	
	std::cout << "Please enter your first name: ";
	
	// read the name
	std::string name;
	std::cin >> name;
	
	
	// build the message that we intend to write
	const std::string greeting = "Hello, " + name + "!";
	

	// pad constant
	const int pad = 1;

	//total number of rows to write
	const int rows = pad * 2 + 3;

	//seperate the output from the input?
	std::cout << std::endl;

	//write rows of output
	int r = 0;

	//invariant: we have written r rows so far
	while (r!=rows) {

		//write a row of output -> section 2.4
		const std::string::size_type cols = greeting.size() + pad * 2 + 2;

		std::string::size_type c = 0;

		//invariant: we have written c characters so far in the current row
		
		while (c != cols) {
		
			if (r == 0 || r == rows -1 || c == 0 || c == cols -1) {
		
				std::cout<<"*";
			} else {		
			//write one or more nonborder characters
			//adjust the value of c to maintain the invariant
			if (r == pad + 1 && c == pad + 1){
				std::cout<< greeting;
				c += greeting.size();
			} else {
				std::cout<< " ";
			}
		}

		}		


		std::cout << std::endl;
		++r;
			}
	return 0;
}
