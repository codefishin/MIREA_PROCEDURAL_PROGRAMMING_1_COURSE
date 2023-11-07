#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <Windows.h>
#include <stdlib.h>

void task2_1()
{
	std::cout << "Enter 2 radius values and height to solve cone volume and surface level...\b\n\n";
	float radius1{}, radius2{}, height{}, length{};
	std::cout << "radius 1 = "; std::cin >> radius1; std::cout << std::endl;
	std::cout << "radius 2 = "; std::cin >> radius2; std::cout << std::endl;
	std::cout << "height = "; std::cin >> height; std::cout << std::endl;
	if (radius1 <= 0 or radius2 <= 0 or height <= 0)
	{
		std::cout << "Unsolvable. Did you enter in values less than 0?" << std::endl;
	}
	else
	{
		length = sqrt((pow(radius1 - radius2, 2)) + pow(height, 2));
		std::cout << "Cone volume value (V) is equal to... " << 1.0 / (3.0 * pi * (pow(radius1, 2) + radius1 * radius2 + pow(radius2, 2) * height)) << std::endl;
		std::cout << "Cone surface value (S) is equal to... " << pi * (pow(radius1, 2) + (radius1 + radius2) * length + (pow(radius2, 2))) << std::endl;
	}
	cin_fixer();
}
void task2_2()
{
	float numbera{}, numberx{}, numberw{};
	std::cout << "Enter 2 number, correlating to A and X. Solve a(ln|x|), if |x| < 1, or sqrt(a-x^2), if |x|>1" << std::endl;
	std::cout << "a = "; std::cin >> numbera; std::cout << std::endl;
	std::cout << "x = "; std::cin >> numberx; std::cout << std::endl;
	if (abs(numberx) < 1 and numberx != 0)
	{
		numberw = numbera * log(abs(numberx));
		std::cout << "Your W value is equal to... " << numberw << std::endl;
	}
	else if (numberx == 0)
	{
		std::cout << "Undefined" << std::endl;
	}
	else
	{
		if (numbera > pow(numberx, 2))
		{
			numberw = sqrt(numbera - pow(numberx, 2));
			std::cout << "Your W value is equal to... " << numberw << std::endl;
		}
		else
		{
			std::cout << "Undefined" << std::endl;
		}
	}
}
void task2_3()
{
	std::cout << "Enter 3 number values to solve z = ln(b-y)*sqrt(b-x). " << std::endl;
	float numberX{}, numberY{}, numberB{}, numberZ;
	int check = 0;
	std::cout << "X = "; std::cin >> numberX; std::cout << std::endl;
	std::cout << "Y = "; std::cin >> numberY; std::cout << std::endl;
	std::cout << "B = "; std::cin >> numberB; std::cout << std::endl;
	if (numberB < numberX)
	{
		std::cout << "Does not exist." << std::endl;
		check += 1;
	}
	else if (check == 0 and numberB <= numberY)
	{
		std::cout << "Undefined." << std::endl;
		check += 1;
	}
	else
	{
		numberZ = log(numberB - numberY) * sqrt(numberB - numberX);
		std::cout << numberZ << std::endl;
	}
}
void task2_4()
{
	float numberN{}, Xnumber{};
	Xnumber = 0.0;
	std::cout << "Enter a number to get 10 new numbers. The calculation is x+=n, 10 times... " << std::endl;
	std::cout << "-> "; std::cin >> numberN;
	std::cout << "Your number list is... " << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << Xnumber << std::endl;
		Xnumber += numberN;
	}
}
void task2_5()
{
	float finalnumberX, finalnumberY;
	finalnumberX = -4.0;
	while (finalnumberX <= 4)
	{
		if ((finalnumberX - 1) != 0)
		{
			finalnumberY = (pow(finalnumberX, 2) - 2 * finalnumberX + 2) / (finalnumberX - 1);
			std::cout << finalnumberY << std::endl;

		}
		else
		{
			std::cout << "Cannot divide by 0" << std::endl;
		}
		finalnumberX += 0.5;
	}
}
