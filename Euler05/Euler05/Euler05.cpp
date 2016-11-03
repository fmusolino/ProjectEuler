// Euler05.cpp : definisce il punto di ingresso dell'applicazione console.
// "Sum square difference"
// Trovare la differenza tra la somma dei quadrati ed il quadrato della somma dei primi 100 numeri naturali

#include "stdafx.h"
#include "iostream"


int main()
{
	long long sum = 0, squaresum = 0, difference, isquared;
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
		isquared = i * i;
		squaresum += i * i;
	}
	sum *= sum;
	difference = sum - squaresum;
	std::cout << difference;
	getchar();
    return 0;
}

