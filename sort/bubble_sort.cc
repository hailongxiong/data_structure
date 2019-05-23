#include <iostream>
using namespace std;

int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
const int size = 10;

void bubbleSort0(int a[], int size)
{
    cout << "bubble sort origin value:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "the i is " << i << "the value is " << a[i] << endl;
    }

    // main process
    cout << "main process:" << endl;
    for (int j = 0; j < size - 1; j++)
    {
        for (int k = j+1; k < 10; k++)
        {
            if (a[j] > a[k])
            {
                int temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }

    cout << "after bubble sort value: " << endl;
    for (int n = 0; n < 10; n++)
    {
        cout << "the n is " << n << "the value is " << a[n] << endl;
    }
}

int main()
{
    cout << "bubble sort " << endl;
    bubbleSort0(a, size);

    return 0;
}

