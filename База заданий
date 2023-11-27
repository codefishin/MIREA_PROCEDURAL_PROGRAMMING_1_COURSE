// прошу заметить. тут только 5 номеров, которые я выбрал и которые мне хватит сдать. сюда могут появится другие числа позже
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
void BZ2() {
	float n = 0;
	float powerof2 = 2;
	float tempPO2 = 0;
	std::string c1, c2, c3, c4;
	printf("Please enter a number\n-> ");
	std::cin >> n;
	int n2 = abs(n);
	if (n < 0)
	{
		printf("\nYour number is negative integer\n");
		c1 = "Yes";
	}
	else if (n == 0)
	{
		printf("\nYou have entered 0, which is not positive nor negative\n");
		c1 = "No";
	}
	else
	{
		printf("\nYour number is a positive integer\n");
		c1 = "No";
	}
	if (n2 % 2 != 0)
	{
		printf("\nYour number is an odd integer\n");
		c2 = "Yes";
	}
	else
	{
		printf("\nYour number is not an odd integer\n");
		c2 = "No";
	}
	if (n > -3)
	{
		printf("\nYour number is over -3\n");
		c3 = "Yes";
	}
	else
	{
		printf("\nYour number is less than -3\n");
		c3 = "No";
	}
	int i = 0;
	if (n > 0)
	{
		while (true)
		{
			tempPO2 = pow(powerof2, i);
			if (n == tempPO2)
			{
				printf("\nYour number is a power of 2\n");
				c4 = "Yes";
				break;
			}
			else if (n > 1)
			{
				i += 1;
				if (n < tempPO2)
				{
					printf("\nYour number is not a power of 2\n");
					c4 = "No";
					break;
				}
			}
			else if (n < 1)
			{
				i -= 1;
				if (n > tempPO2)
				{
					printf("\nYour number is not a power of 2\n");
					c4 = "No";
					break;
				}
			}
		}
	}
	else
	{
		printf("\nYour number is not a power of 2\n");
		c4 = "No";
	}
	printf("\nCritirea met: %s, %s, %s, %s\n",c1.c_str(), c2.c_str(), c3.c_str(), c4.c_str());
}
void BZ33() {
	float array[10]{ 5, 1, 0.5, 2, 3, 7, 5, 3.5, 8, 9 }; // вывести должно 7, берёт числа от 5 до 9
	float array2[10]{ 10, 0, 2, 4, 5, 1, 0.2, 4, 5, 20 }; // вевысти должно 0, т.к. не удовлетворяет
	float userarray[10]{}, input = 0;
	printf("The program returns first found value of:\nA[1] < A[current_number] < A[10]\nIf it returns 0, then no such number was found.\n\nPlease enter 10 numbers.\n");

	for (int i = 0; i < 10; i++)
	{
		std::cin >> input;
		userarray[i] = input;
	}
	int zerocheck = 0;

	for (int i = 0; i < 10; i++)
	{
		if (userarray[0] < userarray[i] && userarray[i] < userarray[9])
		{
			system("cls");
			std::cout << "Number " << userarray[i] << " was found!\n";
			break;
		}
		else {
			zerocheck++;
		}
	}
	if (zerocheck == 10)
	{
		system("cls");
		std::cout << "0";
	}
}
// это решение для 43 задания
// крч для этого задания решено сделать через рекурсию 
int bigarr[] = { 1,2,3,4,5,10,20,10,5,4,2,1,0,85,123,442,26,20 }; // сам массив
int arr[] = {0,2,5,10,74,3};
int size = sizeof(arr) / sizeof(arr[0]); // считает размер массива 

void reverse(int arr[], int num) // забирает значения массива и числа, которое нужно ставить как 0
{
	// если число == размерности, то прекратить сортировку  
	if (num == size)
	{
		return;
	}
	int arrelement = arr[num]; // экстрация элементов  
	reverse(arr, num + 1); // сама рекурсия. ну типо сама себя вызывает :>
	arr[size - num - 1] = arrelement; // расстановка всего дела 
}
void BZ43()
{

	std::cout << "Current array: \n"; // вывод данных о массиве
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	reverse(arr, 0); // вызов рекурсии для замены
	std::cout << " \n Reversed array: \n"; // вывод отсортированного массива
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	
}

void BZ62() {
	/*
	Типо сделать из матрицы
	1 1 1
	2 2 2
	3 3 3
	матрицу
	1 2 3
	1 2 3
	1 2 3
	*/

	int arr[3][3]{ {1,2,3},{1,2,3},{1,2,3} };
	int resultarr[3][3]{ {0,0,0},{0,0,0},{0,0,0} }; // сюда запишется перевёрнутая матрица
	// для будущего. В УСЛОВИИ НИЧЕГО НЕ НАПИСАНО ПРО ТО ЧТО ЭТО В ОДНОМ МАССИВЕ И Т.Д. 
	// если я правильно понял, порядок м тут просто математический термин который мне не нужен
	printf("\nMatrix M\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			resultarr[2 - i][j] = arr[j][i]; // заполнение перевёрнутого массива
		}
	}
	printf("Matrix M, rotated 270 degrees\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << resultarr[i][j] << " ";
		}
		std::cout << std::endl;
	}

}
void BZ69() {
	// крч тут вроде мат. уравнение в котором надо найти максимальное число
	
	float a = 0, b = 0, c = 0, num = 1.15;
	printf("Please enter some numbers\n"); std::cin >> a >> b >> c;
	float temp = max(a, b * c);
	float max1 = max(a, a + b), max2 = max(a, b + c), max3 = max(temp,num);
	float upper = max1 + max2, lower = 1+max3;

	std::cout << max1 << " + " << max2 << "\n------------------------\n1 + " << max3 << "\n";

	float equation = 0;
	if (lower != 0)
	{
		equation = upper / lower;
		std::cout << "Result: " << equation;
	}

}
void arraywith1and0(bool* array, int len)
{
	for (int i = len - 1; i >= 0; --i)
	{
		if (!array[i])
		{
			array[i] = true;
			return;
		}
		array[i] = false;
	}
}
void BZ87() {
	// вывести все скобочные выражения длины 10, должны начаться с (, закончится ), 5 ( и 5 )
	// есть  идея сделать через правило да/нет, то есть 1 = ( 0 = ). сделать цикл в котором 
	// проверка 1. является ли первое число 1
	// проверка 2. является ли последнее число 0
	// если да, вывести число и идти дальше по перебору

	// должно быть так, что идёт 1111000 но не 1110000
	
	bool* array = new bool[10]; // массив с true/false
	bool printnum = false; // вывод числа
	int hello = 0, lastresort = 0, total = 0;
	for (int j = 0; j < 1024; j++) // 2^10 = 1024
	{
		arraywith1and0(array, 10); // функция которая создаёт массив из 10 значений true/false, то есть бинарное
		for (int j = 0; j < 10; j++)
		{
			if (array[j] == true) // если скобка открылась
			{
				hello++; // проверка 1 добавляется
				if (array[0] != 0 && array[9] != 1 && lastresort >= 0) // тут более комплексное, но вкратце это проверка на 1110000 (чтоб такого не было)
				{
					lastresort++;
				}
			}
			else if (array[0] != 0 && array[9] != 1 && array[j] == false) // если стоит 0 то отнимает от 2 проверок. почему для lr нету спец. проверки, это потому что в выводе нас волнует только если оно равно 0. если оно меньше 0 то не выводим число
			{
				hello--;
				lastresort--;
			}
		}

		for (int i = 0; i < 10; i++) // вывод
		{
			if (array[0] != 0 && array[9] != 1 && hello == 0 && lastresort == 0) // если всё сработало
			{
				printnum = true; //это рил  для красоты
				std::cout << (array[i] ? "(" : ")"); // вывод скобок, т.к. array содержит в себе true / false, то true выводит ( и false )
			}
		}
		if (printnum == true)
		{
			printnum = false;
			total++; // для пользователя, чтоб легче было посчитать результат
			std::cout << std::endl; // вот тут красота используется
		}
	    // это чисто аннулирование всех проверок для следующего числа
		hello = 0;
		lastresort = 0;
	}
	printf("This script prints out every correct form of parenthesis equations. \nProgram found total of %i equations that met the criteria.\n",total);
	delete[] array;

}

