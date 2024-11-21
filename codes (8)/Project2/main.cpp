#include <iostream>

int noneeded = 0;
int summ = 0;
int count = 0;
int number = 0;

int main()
{
	std::cout << "give me a no";
	std::cin >> noneeded;
do
{
	std::cout << "add number";
		std::cin >> number;
		summ = summ + number;
		count +=1;
		}while (count<noneeded);
std::cout <<summ;
}