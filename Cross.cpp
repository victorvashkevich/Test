// Cross.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

class Point {
public:
	int x;
	int y;

	Point() {

	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};
class Section {

public:
	Section(int ax, int ay, int bx, int by) {

		A = Point(ax, ay);
		B = Point(bx, by);
	}

	Point A;
	Point B;

};

class Vector {

public:

	Vector(Point A, Point B) {
		C = Point(B.x - A.x, B.y - A.y);
	}

	Point C;
};

class Geometry {
public:

	int VectorMult(Vector A, Vector B) //векторное произведение
	{		
		return A.C.x*B.C.y - B.C.x*A.C.y;
	}

	void isCross(Section AB, Section CD)
	{
		int vm1 = VectorMult(Vector(CD.A, CD.B), Vector(CD.A, AB.A));
		int vm2 = VectorMult(Vector(CD.A, CD.B), Vector(CD.A, AB.B));
		int vm3 = VectorMult(Vector(AB.A, AB.B), Vector(AB.A, CD.A));
		int vm4 = VectorMult(Vector(AB.A, AB.B), Vector(AB.A, CD.B));

		if (vm1*vm2 < 0 && vm3*vm4 < 0) {
			std::cout << "Cross";
		}
		else
		{
			std::cout << "Not Cross";
		}

	}
};
int main()
{
	int ax, ay, bx, by, cx, cy, dx, dy;

	Geometry Geom;

	std::cout << "Input coordinates " << "\n";
	std::cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

	Section AB(ax, ay, bx, by);
	Section CD(cx, cy, dx, dy);

	Geom.isCross(AB, CD);


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
