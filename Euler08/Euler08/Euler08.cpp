// Euler08.cpp : definisce il punto di ingresso dell'applicazione console.
// "Special Pythagorean triplet"
// Una terna pitagorica è una serie di tre numeri, chiamati a, b e c, con a < b < c, per cui: a^2 + b^2 = c^2
// Esiste una (ed una sola) tripletta per cui a + b + c = 1000. Trovare il suo prodotto.

#include "stdafx.h"
#include <iostream>
#include <cmath>

bool isATriplet(int a, int b, int c);

int main()
{
	int a, b, c = 3;
	bool triplet = false;
	do
	{
		while (c <= 1000)
		{
			b = 0;
			while (b < c)
			{
				a = 0;
				while (a < b)
				{
					if (a + b + c == 1000 && isATriplet(a, b, c))
					{
						std::cout << a * b * c;
						triplet = true;
					}
					a++;
				}
				b++;
			}
			c++;
		}
	} while (!triplet);
	getchar();
    return 0;
}

bool isATriplet(int a, int b, int c)
{
	double aSquared = pow(a, 2), bSquared = pow(b, 2), cSquared = pow(c, 2), aSquaredPlusBSquared = aSquared + bSquared;
	if (aSquaredPlusBSquared == cSquared)
		return true;
	else
		return false;
}
