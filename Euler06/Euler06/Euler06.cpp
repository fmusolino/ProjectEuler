// Euler06.cpp : definisce il punto di ingresso dell'applicazione console.
// "10001st prime"
// Trovare il 10001esimo numero primo

#include "stdafx.h"
#include "iostream"

bool isPrime(int num);

int main()
{
	int primeCounter = 0;
	int currentNumber = 2;
	while (primeCounter < 10001)
	{
		if (isPrime(currentNumber))
		{
			primeCounter++;
		}
		if (primeCounter != 10001)
		{
			currentNumber++;
		}
	}
	std::cout << currentNumber;
	getchar();
    return 0;
}

bool isPrime(int num)
{
	int testNumber = 2;
	bool isPrime = true;
	while (testNumber < num && isPrime)
	{
		if (num % testNumber == 0)
		{
			isPrime = false;
		}
		testNumber++;
	}
	return isPrime;
}

