// Euler04.cpp : definisce il punto di ingresso dell'applicazione console.
// "Smallest multiple"
// Trovare il più piccolo numero divisibile per tutti i numeri da 1 a 20

#include "stdafx.h"
#include "iostream"

int main()
{
	bool mult = false;
	int i = 21;
	while (!mult)
	{
		if (i % 2 == 0 && i % 3 == 0 && i % 4 == 0 && i % 5 == 0 && i % 7 == 0 && i % 8 == 0 
			&& i % 9 == 0 && i % 11 == 0 && i % 13 == 0 && i % 15 == 0 && i % 16 == 0 && 
			i % 17 == 0 && i % 18 == 0 && i % 19 == 0 && i % 20 == 0)
			mult = true;
		else
			i++;
	}
	std::cout << i;
	getchar();
    return 0;
}

