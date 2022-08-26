#include <iostream>
using namespace std;

inline int sum(int A, int B) {
	return A + B;
}
//Сумма всех чисел от А до В
inline int sum_A_to_B(int A, int B) {
	int res = 0;
	for (int i = A; i <= B; i++)
		res += i;
	return res;
}

// Перегруженные функции.
int max_el(int A, int B) {
	cout << "Получены два целых числа.\n";
	return A > B ? A : B;
}
//Максимум двух вещественных чисел
double max_el(double A, double B) {
	cout << "Получены два вещественных числа.\n";
	return A > B ? A : B;
}

//Максимум коротких чисел
short max_el(short A, short B, short C) {
	cout << "Получено три коротких числа.\n";
	return A > (B > C ? B : C) ? A : (B > C ? B : C);
}

// Шаблонные функции
//Функция поиска модуля числа.
template <typename T>
T absolute(T num) {
	return num < 0 ? -num : num;
}


int main() {

	setlocale(LC_ALL, "Russian");

	int n, m;
	// Встраеваемая функция заменяет место своего вызова в коде собой.
	/*
	cout << "Введите два числа: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n,m) << endl;

	int res = sum(10, 5);
	cout << "10 + 5 = " << res << endl;
	*/
	
	// Функцию не возможно встроить если ее тело физически не может существовать в том месте кода, где она вызывается.
	/*
	cout << "Введите два числа: ";
	cin >> n >> m;
	cout << "Сумма чисел от " << n << " до " << m << " = " << sum_A_to_B(n, m) << endl;
	*/

	// MAX_EL
	// Максимум двух целых чисел
	/*
	cout << max_el(10, 7) << endl;
	cout << max_el(20, 50) << endl;
	cout << max_el(0.3, 0.8) << endl; // Перегруженная функция, обладает не сколькими экземплярами, которые отличаются между собой типами\или количеством принимаемых  значении.
									// Также, экземпляры могут отличаться типами возвращаемых значении и телами.


	short s1 = 15, s2 = 34, s3 = 13;
	cout << max_el(s1, s2, s3) << endl; 
	*/

	// Шаблонная функция (шаблон функции) - функция которая может работать с любыми типами данных. Генерирует экземпляры функции в зависимости от типов переданных данных.

	// ABSOLUTE
	cout << absolute(7) << endl;
	cout << absolute(-11) << endl;
	cout << absolute(0.16) << endl;
	cout << absolute(-1.5) << endl;











	return 0;
}