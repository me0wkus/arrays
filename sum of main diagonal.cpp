#include <iostream>
using namespace std;

int main() {
    int n; 
    double sum = 0; 

    cout << "Enter yor matrix n: ";
    cin >> n;

    double** a = new double* [n]; 

    for (int i = 0; i < n; i++) {
        a[i] = new double[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter your matrix[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    cout << "Sum of main diagonal is " << sum << endl;

    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
