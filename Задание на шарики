// шарики :D

#include <iostream>
#include <cmath>
#include <algorithm>
#include <Windows.h>
#include <stdlib.h>

int checkarrayswag[25]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
int swag[25]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
bool printball = false;
int answertoballs = 0;
void generate(int t, int n)
{
	if (t == n - 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (swag[i] == checkarrayswag[i])
			{
				printball = true;
			}
		}
		if (printball == true)
		{
			for (int s = 0; s < n; s++)
			{
				std::cout << swag[s] << " ";
			}
			std::cout << std::endl;
			answertoballs++;
			printball = false;
		}
	}
	else
	{
		for (int j = t; j < n; j++)
		{
			std::swap(swag[t], swag[j]);
			t++;
			generate(t, n);
			t--;
			std::swap(swag[t], swag[j]);
		}
	}
}

void balls() {
	int num = 0;
	printf("Please enter how many balls (!) you are willing to give\n"); std::cin >> num;
	if (num > 0)
	{
		generate(0, num);
		printf("\nTotal of %i balls were moved or smth idek\n",answertoballs);
	}
	else
	{
		printf("\nReally?\n");
	}
}
