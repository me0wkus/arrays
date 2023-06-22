﻿#include <iostream>
using namespace std;
int** creat(int &n, int &m)
{
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	// определяем максимальное кол-во строк.
	int** mas = new int* [2 * n];
	for (int i = 0; i < n; ++i)
		mas[i] = new int[m];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "mas [" << i << "][" << j << "] = ";
			cin >> mas[i][j];
		}
	return mas;
}
void print(int** mas, int n, int m)
{
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < m; j++)
			cout << mas[i][j] << "\t";
}
void deleteMas(int** mas, int n)
{
	for (int i = 0; i < n; i++)
		delete[] mas[i];
	delete[] mas;
}
int main()
{
	int n, m, k;
	int** a = creat(n, m); // Создаём ии заполняем матрицу a
	// n - текущее кол-во строк, n2 - максимальное возможное
	int n2 = 2 * n;
	print(a, n, m); // выводим первоначальный массив
	cout << "k = ";
	cin >> k; // выводим номер строки добавления
	if (k < 0 || k > n - 1 || n + 1 > n2)
		cout << "error";
	else
	{
		for (int i = n; i > k; --i) // выполняем сдвиг строк
			a[i] = a[i - 1];
		++n; // увеличиваем текущее кол-во строк в массиве
		a[k] =
			// выделяем память под новую строку массива и заполняем её
			new int[m];
		for (int j = 0; j < m; ++j)
		{
			cout << "a[" << k << "][" << j << "] = ";
			cin >> a[k][j];
		}
		print(a, n, m); // выводим измененный массив
	}
	deleteMas(a, n);
	return 0;
}