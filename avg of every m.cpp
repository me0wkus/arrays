#include <iostream>
using namespace std;

int main()
{
    
    float* A;
    int n, m;
    cout << "n = " << endl;
    cin >> n;
    cout << "m = " << endl;
    cin >> m;
    
    if (n != m)
    {
        A = new float[n * m];
        cout << "Enter your array = " << endl;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> *(A + i * m + j);
                
            }
        cout << "Array = " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << A[i * m + j] << " ";
            cout << endl;

        }
        int k = m;
        double* avg = new double[k];
        for (int j = 0; j < m; j++)
        {

            double summ = 0;
            for (int i = 0; i < n; i++)
            {
                summ += *(A + i * m + j);

            }
            *(avg + j) = (summ / n);
        }
        double result = 1;
        for (int i = 0; i < k; i++)
        {
            result *= avg[i];
        }
        cout << "Answer is  " << result << endl;
        delete[]A;
        return 0;
    }
}