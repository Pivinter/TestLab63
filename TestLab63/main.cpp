#include "pch.h"
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}
void Print1(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << (a[i] % 2 == 1) << endl;
	cout << endl;
	cout << "0 is steamy and 1 is not steamy" << endl;
}
void Print2(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
	S += (a[i] % 2 == 1);
	cout << "no steamy =" << S << endl;
}
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 25;
	int a[n];
	int Low = 5;
	int High = 90;
	Create(a, n, Low, High);
	Print(a, n);
	Print1(a, n);
	Print2(a, n);
	return 0;
}
