// Euler01.cpp : definisce il punto di ingresso dell'applicazione console.
// "Even Fibonacci numbers"
// Sommare i numeri pari in una sequenza di Fibonacci che non superano i 4 milioni 

#include "stdafx.h"
#include <iostream>

int main()
{
	int prev = 1, curr = 1, next, sum = 0;
	do
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		if (curr % 2 == 0)
			sum += curr;
	} while (curr <= 4000000);
	std::cout << sum;
	getchar();
    return 0;
}

