// Euler03.cpp : definisce il punto di ingresso dell'applicazione console.
// "Largest palindrome product"
// Trovare il più grande numero palindromo derivato dal prodotto di due numeri a tre cifre

#include "stdafx.h"
#include <iostream>


int main()
{
	int currNum1 = 999, currNum2 = 999;
	bool foundPali;
	long long currProd, temp, biggestPali = 0;
	int numArray[6];
	do {
		currNum1 = 999;
		foundPali = false;
		do
		{
			currProd = currNum1 * currNum2;
			temp = currProd;
			for (int i = 5; i >= 0; i--)
			{
				numArray[i] = temp % 10;
				temp /= 10;
			}
			//std::cout << currNum1 << " x " << currNum2 << " = " << currProd;
			if (numArray[0] == 0)
			{
				if (numArray[1] == numArray[5] && numArray[2] == numArray[4])
				{
					if (currProd > biggestPali)
					{
						//std::cout << " - palindromo\n";
						biggestPali = currProd;
						foundPali = true;
					}
				}
				/*else
				{
					std::cout << "\n";
				}*/
			}
			else
			{
				if (numArray[0] == numArray[5] && numArray[1] == numArray[4] && numArray[2] == numArray[3])
				{
					if (currProd > biggestPali)
					{
						//std::cout << " - palindromo\n";
						biggestPali = currProd;
						foundPali = true;
					}
				}
				/*else
				{
					std::cout << "\n";
				}*/
			}
			currNum1--;
		} while (currNum1 >= 100 && !foundPali);
		currNum2--;
	} while (currNum2 >= 100);
	std::cout << biggestPali;
	getchar();
    return 0;
}

