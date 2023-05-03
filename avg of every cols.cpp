#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout << "Enter number of rows: ";
    cin >> N;
    cout << "Enter number of cols: ";
    cin >> M;

    int** matrix = new int* [N];
    for (int i = 0; i < N; ++i) {
        matrix[i] = new int[M];
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << "Enter elements of matrix [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < M; ++j) {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            sum += matrix[i][j];
        }
        double average = sum / N; 
        cout << "Avg of each cols: " << j << ": " << average << endl;
    }

    for (int i = 0; i < N; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
