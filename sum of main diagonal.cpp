#include <iostream>
using namespace std;
float **creat(int &n)
{
	cout << "n = ";
	cin >> n;
	float **mas = new float *[n];
	for (int i = 0; i < n; ++i)
		mas[i] = new float[n];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++i)
		{
			cout << "mas[" << i << "][" << j << "] = ";
			cin >> mas[i][j];
		}

	return mas;
}
int main()
{
	int n;
	float** a = creat(n);
	float s = 0;
	
	for (int i = 0; i < n; i++)
		s += a[i][i];
	cout << "Sum of main diagonal = " << s;
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}