#include <iostream>
#include <locale>

const int N = 3;
const int M = 3;

void insertRow(int array[N][M], int& num_rows, int new_row[M], int replace_row) {
    if (replace_row < 0 || replace_row >= num_rows) {
        std::cout << "Недопустимый номер строки для замены." << std::endl;
        return;
    }

    for (int j = 0; j < M; ++j) {
        array[replace_row][j] = new_row[j];
    }
}

void printArray(int array[N][M], int num_rows) {
    for (int i = 0; i < num_rows; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::locale::global(std::locale(""));

    int array[N][M] = {};
    int num_rows = 0;

    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Строка " << i + 1 << ":" << std::endl;
        for (int j = 0; j < M; ++j) {
            std::cin >> array[i][j];
        }
        ++num_rows;
    }

    int replace_row;
    std::cout << "Введите номер строки для замены (от 0 до " << num_rows - 1 << "): ";
    std::cin >> replace_row;

    if (replace_row >= 0 && replace_row < num_rows) {
        int new_row[M];
        std::cout << "Введите элементы новой строки:" << std::endl;
        for (int j = 0; j < M; ++j) {
            std::cin >> new_row[j];
        }

        insertRow(array, num_rows, new_row, replace_row);
    }
    else {
        std::cout << "Недопустимый номер строки для замены." << std::endl;
    }

    std::cout << "Массив после замены строки:" << std::endl;
    printArray(array, num_rows);

    return 0;
}
