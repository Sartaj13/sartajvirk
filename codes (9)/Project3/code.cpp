#include <iostream>
#include <string>

void main()  
{
	int r;
	char answer;
	std::string cars[3] = { "Volvo", "BMW", "MERCEDES" };
	do {
		do
		{

			std::cout << "Which Car you want to see? (0 a 2)";
			std::cin >> r;
		} while (r < 0 || r < 2);
		std::cout << "o carro que escolheste e o" << cars[r];
		std::cout << "Queres ir embore? (s/n)";
		std::cin >> answer;
	} while (answer  == 's');
}  

