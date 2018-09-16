// ConsoleApplication32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include<Windows.h>


using namespace std;

//3.	Написать функцию для подсчёта гласных букв в русском тексте, введённом с клавиатуры.

void strG(char x[]) {
	int z = 0;
	char h;
	for (int i = 0; i < strlen(x); i++)
	{
	//	h = x[i];
		switch (x[i]) {
		case 'а': z++;	break;	case 'А': z++;	break;
		case 'е': z++;	break;	case 'Е': z++;	break;
		case 'о': z++;	break;	case 'О': z++;	break;
		case 'у': z++;	break;	case 'У': z++;	break;
		case 'ы': z++;	break;	case 'Ы': z++;	break;
		case 'ё': z++;	break;	case 'Ё': z++;	break;
		case 'я': z++;	break;	case 'Я': z++;	break;
		case 'ю': z++;	break;	case 'Ю': z++;	break;
		case 'э': z++;	break;	case 'Э': z++;	break;
		case 'и': z++;	break;	case 'И': z++;	break;
		}
	}
	cout << "глассных букв = " << z << endl;
}

//4.	Дана строка символов. Необходимо проверить  является ли эта строка палиндромом.

void strP(char x[]) {
	int z = 1;
	for (int i = 0; i < strlen(x)/2; i++)
	{
		if (x[i] != x[strlen(x) - i - 1]) {
			z = 0;	break;
		}
	}
	if (z == 1) cout << "палиндромом!" << endl; else cout << "не палиндромом!" << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/

	//1.	Дана строка символов.Заменить в ней все пробелы на табуляции.
	char a[100] = "Hello World ";

	cout << a << endl;

	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == ' ') a[i] = '\n';
	}
	cout << "1. " << a;
	

	//2.	Создать функцию для вывода русского текста в окно консоли.

	char str[100] = "Русский текст";
	cout  <<"2. "<< str << endl;

	//3
	char b[100] = "кот, собака, сова, белка";
	cout << "3. " << b << endl;
	strG(b);
	
	//4.
	char c[100] = "олола";
	cout <<"4." << c << endl;
	strP(c);

    return 0;
}

