// test.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int numArray[6];
	int temp = 12345;
	for (int i = 5; i >= 0; i--)
	{
		numArray[i] = temp % 10;
		temp /= 10;
		std::cout << "Numero " << i << ":" << temp << " Resto: " << numArray[i] << "\n";
	}
	system("pause");
    return 0;
}

