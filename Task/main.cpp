#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <locale>

#include "Knapsack.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");

	clock_t  start = 0;
	clock_t	 stop = 0;

	std::cout << "Задача о рюкзаке:" << std::endl;
	Knapsack knapsak(18, 300, 10, 300, 5, 55);
	knapsak.Generation();
	knapsak.Show();

	system("pause");
	return 0;
}