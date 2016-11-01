// Euler02.cpp : definisce il punto di ingresso dell'applicazione console.
// Largest prime factor
// Trovare il fattore primo più grande del numero 600851475143

#include "stdafx.h"
#include <iostream>

int nextPrime(int currentPrime);

int main()
{
	unsigned long long currentNumber = 600851475143;
	int currentPrime = 2;
	while (currentNumber != 1)
	{
		if (currentNumber % currentPrime == 0)
			currentNumber /= currentPrime;
		else
			currentPrime = nextPrime(currentPrime);
	}
	std::cout << currentPrime;
	getchar();
    return 0;
}

int nextPrime(int currentPrime)
{
	int nextPrime = currentPrime + 1;
	int test = 2;
	do
	{
		if (nextPrime % test == 0)
		{
			nextPrime++;
			test = 2;
		}
		else
			test++;
	} while (test < nextPrime);
	return nextPrime;
}
