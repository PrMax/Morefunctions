#include <iostream>
using namespace std;

inline int sum(int A, int B) {
	return A + B;
}
//����� ���� ����� �� � �� �
inline int sum_A_to_B(int A, int B) {
	int res = 0;
	for (int i = A; i <= B; i++)
		res += i;
	return res;
}

// ������������� �������.
int max_el(int A, int B) {
	cout << "�������� ��� ����� �����.\n";
	return A > B ? A : B;
}
//�������� ���� ������������ �����
double max_el(double A, double B) {
	cout << "�������� ��� ������������ �����.\n";
	return A > B ? A : B;
}

//�������� �������� �����
short max_el(short A, short B, short C) {
	cout << "�������� ��� �������� �����.\n";
	return A > (B > C ? B : C) ? A : (B > C ? B : C);
}

// ��������� �������
//������� ������ ������ �����.
template <typename T>
T absolute(T num) {
	return num < 0 ? -num : num;
}


int main() {

	setlocale(LC_ALL, "Russian");

	int n, m;
	// ������������ ������� �������� ����� ������ ������ � ���� �����.
	/*
	cout << "������� ��� �����: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n,m) << endl;

	int res = sum(10, 5);
	cout << "10 + 5 = " << res << endl;
	*/
	
	// ������� �� �������� �������� ���� �� ���� ��������� �� ����� ������������ � ��� ����� ����, ��� ��� ����������.
	/*
	cout << "������� ��� �����: ";
	cin >> n >> m;
	cout << "����� ����� �� " << n << " �� " << m << " = " << sum_A_to_B(n, m) << endl;
	*/

	// MAX_EL
	// �������� ���� ����� �����
	/*
	cout << max_el(10, 7) << endl;
	cout << max_el(20, 50) << endl;
	cout << max_el(0.3, 0.8) << endl; // ������������� �������, �������� �� ��������� ������������, ������� ���������� ����� ����� ������\��� ����������� �����������  ��������.
									// �����, ���������� ����� ���������� ������ ������������ �������� � ������.


	short s1 = 15, s2 = 34, s3 = 13;
	cout << max_el(s1, s2, s3) << endl; 
	*/

	// ��������� ������� (������ �������) - ������� ������� ����� �������� � ������ ������ ������. ���������� ���������� ������� � ����������� �� ����� ���������� ������.

	// ABSOLUTE
	cout << absolute(7) << endl;
	cout << absolute(-11) << endl;
	cout << absolute(0.16) << endl;
	cout << absolute(-1.5) << endl;











	return 0;
}