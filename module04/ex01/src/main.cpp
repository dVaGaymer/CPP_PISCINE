#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	l(){ system("leaks animal"); }

int main()
{
	atexit(l);
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	delete dog;
	delete cat;

	/*------------------------------------------------------------*/

	const Dog*	dog_1 = new Dog();
	const Dog*	dog_2 = new Dog(*dog_1);

	std::cout << "Dog 1 Brain" << std::endl;
	dog_1->printBrain();
	std::cout << "Dog 2 Brain" << std::endl;
	dog_2->printBrain();

	delete dog_1;
	std::cout << "Dog 2 Second Brain" << std::endl;
	dog_2->printBrain();
	delete dog_2;
}
