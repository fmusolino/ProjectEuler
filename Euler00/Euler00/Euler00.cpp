// Euler00.cpp : definisce il punto di ingresso dell'applicazione console.
// "Multiples of 3 and 5"
// Sommare tutti i numeri inferiori a 1000 che sono multipli di 3 e/o 5

#include "stdafx.h"
#include <iostream>


int main()
{
	int sum = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	std::cout << sum;
	getchar();
    return 0;
}
