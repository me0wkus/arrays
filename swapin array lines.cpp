#include <iostream>
using namespace std;
float ** creat(int& n, int& m)
{
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	float **mas = new float*  [n];
	for (int i = 0; i < n; ++i)
		mas[i] = new float[m];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "mas[" << i << "][" << j << "] = ";
			cin >> mas[i][j];
		}
	return mas;
}
int main()
{
	int n, m;
	cout << "n = ";
		cin >> n;
		cout << "m = ";
		cin >> m;
	float** a = creat(n, m);
	float* z;
	for (int i = 0; i < (n / 2); ++i)
	{
		z = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = z;
	}
	for (int i = 0; i < n; ++i, cout << endl)
		for (int j = 0; j < m; ++j)
			cout << a[i][j] << "\t";
	for (int i = 0; i < n; ++i)
		delete[] a[i];
	delete[] a;
	return 0;
}