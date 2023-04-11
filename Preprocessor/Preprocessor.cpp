#include <iostream>
#include "H1.h"


//Препроцессор - программа, которая производит некоторые, а иногда весьма значительные, манипуляции с первоначальным текстом программы перед тем, как он подвергается компиляции.
//Директива препроцессора - команда, указывающая препроцессору на то, как именно должен быть изменен исходный текст программы.

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

	//Простые объекты препроцессора
	/*std::cout << "Pi = " << _PI << std::endl; // _PI заменяется на 3.14 после обработки препроцессором
	// _PI = 3; // Ошибка
	eternal {
		std::cout << ".";
		if (eti >= 20)
			break;
	}*/

	//Макросы препроцессора (функции)
	/*std::cout << "Введите первое число: ";
	std::cin >> n;
	std::cout << "Введите второе число: ";
	std::cin >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;
	const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	print_arr(arr, size);*/

	//Операторы препроцессора
	show(I love C++);
	n = 10;
	var(n);
	double tmp = 1.55;
	var(tmp);
	std::cout << "tmp = " << concat(t, mp) << std::endl;
	std::cout << _PI << std::endl;

#undef _PI
	//std::cout << _PI << std::endl; //Ошибка, т. к. _PI не обнаружено
#define _PI 3
	std::cout << _PI << std::endl;


	return 0;
}