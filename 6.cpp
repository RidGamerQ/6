#include <iostream>
#include <iomanip>
using namespace std;

void swap(int* massiv, int index_one, int index_two)
{
    int temp = massiv[index_one];
    massiv[index_one] = massiv[index_two];
    massiv[index_two] = temp;
}

double sum(int a[], int n)
{
    double suma = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        suma += a[i];
    }
    return suma;
}

int main()
{
    setlocale(0, ".1251");
    const int N = 12;
    int a[N] = { 1,2,1,2,0,0,0,1,2,0,1,2 };
    int index = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == 0)
        {
            swap(a, i, index);
            ++index;
        }
    }
    for (int i = index; i < N; i++)
    {
        if (a[i] == 1)
        {
            swap(a, i, index);
            ++index;
        }
    }
    for (int i = 0; i < N; i++)
        cout << setw(3) << a[i];
    cout << endl;
    cout << "\n Сума додатних чисел масиву = " << sum(a, 12);
    return 0;
}