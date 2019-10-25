﻿// Fibonacci.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

class Fibonacci
{

private:

	int N;
	int getFibonacci(int c)
	{
		if (c == 1 || c == 0)
		{
			return c;
		}

		return getFibonacci(c - 2) + getFibonacci(c - 1);
	}

public:

	void SetN(int N)
	{
		this->N = N;
	}
	void getRangeFibonacci()
	{
		{
			for (int i = 1; i <= N; i++)
			{
				std::cout << getFibonacci(i) << " ";
			}
		}

	}
};
int main()
{
	Fibonacci fibonacci;
	int N;

	std::cout << "Input N ";
	std::cin >> N;

	fibonacci.SetN(N);

	std::cout << "Fibonacci range "<<"\n";
	fibonacci.getRangeFibonacci();


}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.