#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "russian");
    int array[100][100], n, m;
    double avg, sum = 0, count = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
            if (array[i][j] % 2 == 0)
            {
                sum += array[i][j];
                count++;
            }
        }
    avg = sum / count;
    cout << "Average is = " << avg;

    return 0;
}