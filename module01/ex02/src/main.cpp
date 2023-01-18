#include <string>
#include <iostream>

int	main(void)
{
	std::string	salute = "HI THIS IS BRAIN";
	std::string	*stringPTR = &salute;
	std::string	&stringREF = salute;

	std::cout << &salute << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << salute << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";

	return (0);
}
