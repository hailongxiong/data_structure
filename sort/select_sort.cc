#include <iostream>
using namespace std;

int a[] = {33, 12, 11, 34, 55, 12, 10, 9, 10, 11};
const int size = 10;

void selectSort(int a[], int size)
{
    for (int i=0; i<size-1; i++)
    {
        int min = i;
        for (int j=i; j<size; j++)
        {
            if (a[min]>a[j])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int tmp = a[min];
            a[min] = a[i];
            a[i] = tmp;
        }
    }
}

int main()
{
    selectSort(a, size);
    for (int i=0; i<size; i++)
    {
        cout << "the i: "<<i<<"the value: " << a[i] <<endl;
    }

    return 0;
}
