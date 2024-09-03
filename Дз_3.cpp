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


std::string removal(std::string s) // крч алгоритм по удалению букв из строк
{
	std::string ns; // создаётся новая строка
	for (int i = 0; i < s.length(); i++) // цикл 
	{
		if (s.at(i) >= '0' && s.at(i) <= '9' || s.at(i) == '.') // проверка, если текущий символ строки имеет в себе цифру от 0 до 9; 18.10.2023 ИЛИ . ПОТОМУ ЧТО ВТОРОЕ ЗАДАНИЕ =)
		{
			ns += s.at(i); // то ввести этот символ в новую строку ns
		}
	}
	return ns;
}

void task3_1()
{
	double m;
	std::string pfix, sfix, nfix; // для алгоримтма создаются ещё переменные

	std::cout << "Input the following values: p,S,n" << std::endl; std::cout << "-> "; std::cin >> pfix; std::cout << "\n-> "; std::cin >> sfix; std::cout << "\n-> "; std::cin >> nfix; // p = %, s = summ, n = time ... вводятся переменные ДЛЯ АЛГОРИТМА
	std::string pN = removal(pfix); // исполнение алгоритма для введённых пользователем переменных
	std::string sN = removal(sfix); // после выполнения этой хери останутся только цифры
	std::string nN = removal(nfix); // если цифр нет, то будет пустая строка
	if (std::empty(pN) == 1 || std::empty(sN) == 1 || std::empty(nN) == 1) // если строка пустая, прога не выполняется
	{
		std::cout << "Cannot calculate.\b\n";
	}
	else // иначе выполняется 1000000 (s) 15 (p) 20 (n)
	{ // 0 1200 4
		double p = stod(pN); // перевод строки в числовое
		double s = stod(sN);
		double n = stod(nN);
		double r = p / 100;
		double a;
		double b;
		a = s * r * pow(1 + r, n);
		b = 12 * (pow(1 + r, n) - 1);
		m = a / b;
		if (n == 0 or (12 * (pow(1 + r, n) - 1)) == 0) {
			std::cout << "Unsolvable\b\n";
		}
		else {
			std::cout << "Successful execution, result: " << m << std::endl;
		}
	}
}
void task3_2()
{
	double summary = 0.0, money = 0.0, money_sequel, percent = -100, time = 0.0, step = 5, epsilon = 0.01; //S = SUMMARY, M = MONEY, N = TIME, P = PERCENT
	std::string summaryfix, moneyfix, timefix; // reference to algorithm above (string removal)
	std::cout << "Input the following values:S, m, time\b\n"; std::cout << "-> "; std::cin >> summaryfix; std::cout << "-> "; std::cin >> moneyfix; std::cout << "-> ";std::cin >> timefix; // ввод данных
	std::string ns = removal(summaryfix); // reference to algorithm above (string removal)
	std::string na = removal(moneyfix); // reference to algorithm above (string removal)
	std::string nb = removal(timefix); // reference to algorithm above (string removal)
	int inter = 0; // не нужно, вообще.

	if (std::empty(summaryfix) == 1 || std::empty(moneyfix) == 1 || std::empty(timefix) == 1) // reference to algorithm above (string removal)
	{
		std::cout << "Cannot calculate.\b\n";
	}
	else
	{
		double a = summary * (percent / 100) * (pow(1 + (percent / 100), time));  // числитель
		double b = 12 * (pow(1 + (percent / 100), time) - 1); // знаминатель
		money = a / b; // рофл
		double summary = stod(ns); // reference to algorithm above (string removal)
		double money = stod(na); // reference to algorithm above (string removal)
		double time = stod(nb); // reference to algorithm above (string removal)
		if (summary >= 0 && money >= 0 && time > 0) // 1000000 13313.5 20 otvet 15
		{
			while (true)
			{
				percent += step;
				double a = summary * (percent / 100) * (pow(1 + (percent / 100), time));
				double b = 12 * (pow(1 + (percent / 100), time) - 1);
				if (percent != 0)
				{
					money_sequel = a / b;
					inter++;
				}
				else
				{
					money_sequel = summary / 12 / time;
					inter++;
				}
				if (abs(money_sequel - money) < epsilon) // Модуль текущего "денежного состояния" не больше эпсилона денежного состояния заданного пользователем...
				{
					//std::cout << money << money_sequel << std::endl;
					std::cout << "Executed successfully: " << percent << "%\n";
					std::cout << "Steps taken while calculating: " << inter << std::endl;
					break;
				}
				else if (money_sequel > money)
				{
					percent -= step;
					step /= 10;
					inter++;
				}
			}
		}
		else
		{
			std::cout << "Error\b\n";
		}

	}
}
void task3_3()
{
	char userinput[255];
	char text[259]; // можно было через string но меня уронили в детстве.
	std::cout << "Input file value. (maximum of 255 symbols)\b\n";
	std::cout << "-> "; std::cin.getline(userinput, 255); // ><> fish
	std::ofstream textFile("text.txt");
	if (textFile.is_open()) {
		textFile << userinput;
		textFile.close();
	}
	else
	{
		std::cout << "error\b\n";
	}
	std::ifstream file("text.txt");
	if (!file.is_open())
	{
		std::cout << "error\b\n";
	}
	else
	{
		file.getline(text, 255);
		std::cout << "File insides: " << text << std::endl;
	}
}
void task3_4()
{
	char userinput[1024];
	char text[1024]{};
	int i = 1024;
	std::cout << "Input file value. (maximum of 1024 symbols)\b\n";
	std::cout << "-> "; std::cin.getline(userinput, i);
	std::ofstream textFile("text.txt");
	if (textFile.is_open()) {
		textFile << userinput;
		textFile.close();
	}
	else
	{
		std::cout << "error" << std::endl;
	}
	int c0 = 0;

	std::string s;
	std::ifstream inside;
	inside.open("text.txt");
	std::getline(inside, s);
	std::cout << "Only number string: ";
	for (int i = 0; i < s.length(); i++) // s == string
	{
		char character = s[i]; // переменная, которая сохраняет ТЕКУЩИЙ СИМВОЛ
		int c0 = character - '0';
		if ((c0 >= 0) and (c0 <= 9)) { // если текущий символ = 0 1 2 3 4 5 6 7 8 или 9, вывести c0
			std::cout << c0;
		}
		else {
			if (i == 0 and c0 > 9) { // иначе вместо букв выводим пробел
				std::cout << '\b'; // пробел)
			}
			else std::cout << " "; // проверка чтоб не спамило пробелы если ввести "asdasdasdasdasdasdasdasdasd1sdasdasdasdasdasdasd1"
			if ((i > 0) and (c0 > 9) and ((int(s[i - 1]) - '0') > 9)) { // ещё одна проверка (если круг начался и переменная c0 за гранью чисел и та же проверка для c0 которую я не понимаю
				std::cout << '\b';
			}
		}
	}
	inside.close(); // ВСЁ!
}
void task3_5()
{
	char array[31]{}; // массив
	char userinput;

	std::cout << "### WARNING: ARRAY ONLY TAKES FIRST 30 SYMBOLS, TERMINATE ARRAY BY INPUTTING 0 ### " << std::endl << "Enter symbols: " << std::endl;
	for (int n = 0; n < 30; n++)
	{
		std::cout << "-> "; std::cin >> userinput;
		if (userinput == '0')
		{
			break;
		}
		array[n] = userinput;
		array[n + 1] = '\0';
	}

	for (int i = 0; array[i] != '\0'; i++) // цикл первый, который начинает с первого символа, доходит до конца, шагая по одному символу в раз
	{
		for (int j = i + 1; array[j] != '\0'; j++) // цикл второй, который начинает со следующего символа, относительно цикла первого
		{
			if ((char)tolower(array[i]) > ((char)tolower(array[j]))) // проверка приведённых к нижнему реегистру символов между собой (если первый нижний символ больше второго нижнего символа
			{
				char buffer = array[i]; // мы копируем текущий символ в буфер
				array[i] = array[j]; // заменяем текущий символ на следующий
				array[j] = buffer; // копируем информацию из буфера в следующий символ
			}
			else // иначе
			{ // фигурная скобка
				if ((char)tolower(array[i]) == (char)tolower(array[j]) and array[i] > array[j]) // проверка, в случае если нижний реегистр символа совпадает со следующим и текущий символ больше следующего;
				{
					char buffer = array[i]; // рокировка символов
					array[i] = array[j];
					array[j] = buffer;
				}
			}
		}
	}
	std::cout << "Sorted array: " << array << std::endl;
}
