#include <iostream>
#include "H1.h"


//������������ - ���������, ������� ���������� ���������, � ������ ������ ������������, ����������� � �������������� ������� ��������� ����� ���, ��� �� ������������ ����������.
//��������� ������������� - �������, ����������� ������������� �� ��, ��� ������ ������ ���� ������� �������� ����� ���������.

#define _PI 3.14
#define eternal for(int eti = 0;; eti++)
#define circle_bracket )
#define begin {
#define end }
#define sum(a, b) a + b
#define print_arr(a, s) std::cout << '[';\
for (int i = 0; i < s; i++)\
	std::cout << a[i] <<", ";\
std::cout << "\b\b]\n";

#if 5 < 4

#define var 666

#elif 5 == 4

#define var 0

#else

#define show(p) std::cout << #p <<std::endl
#define var(name) std::cout << #name << " = " << name <<std::endl
#define concat(a, b) a ## b

#endif

#ifdef _PI

void foo(){}

#endif

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//������� ������� �������������
	/*std::cout << "Pi = " << _PI << std::endl; // _PI ���������� �� 3.14 ����� ��������� ��������������
	// _PI = 3; // ������
	eternal {
		std::cout << ".";
		if (eti >= 20)
			break;
	}*/

	//������� ������������� (�������)
	/*std::cout << "������� ������ �����: ";
	std::cin >> n;
	std::cout << "������� ������ �����: ";
	std::cin >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;
	const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	print_arr(arr, size);*/

	//��������� �������������
	show(I love C++);
	n = 10;
	var(n);
	double tmp = 1.55;
	var(tmp);
	std::cout << "tmp = " << concat(t, mp) << std::endl;
	std::cout << _PI << std::endl;

#undef _PI
	//std::cout << _PI << std::endl; //������, �. �. _PI �� ����������
#define _PI 3
	std::cout << _PI << std::endl;


	return 0;
}