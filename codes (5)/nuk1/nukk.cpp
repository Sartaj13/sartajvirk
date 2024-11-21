#include <iostream>
#include <locale.h>

void main()
{
	int KMI, KMF, LGastos;
	setlocale(LC_ALL, "Portuguese");
	std::cout << "Indique o numero de KM Inicial - ";
	std::cin >> KMI;
	std::cout << "Indique o numero de KM Finais - ";
	std::cin >> KMF;
	std::cout << "Indique o numero de Litros Gastos - ";
	std::cin >> LGastos;
	std::cout << "A quantidade de Litros Gastos a cada 100km é:" << (LGastos * 100) / (KMF- KMI);
}
