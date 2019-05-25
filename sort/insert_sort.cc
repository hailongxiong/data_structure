#include <iostream>
using namespace std;

int a[] = {22,11,2,4,66,7,90,34,33,77};
const int size = 10;

void insert_sort(int a[], int size)
{
    int i, j;
    for (i=1; i<size; i++)
    {
        if (a[i] < a[i-1])
        {
            int tmp = a[i];
            for (j=i-1; a[j] > tmp; j--)
            {
                a[j+1] = a[j];
            }

            a[j+1] = tmp;
        }
    }
}

int main()
{
    insert_sort(a, size);

    for (int i=0; i<size; i++)
    {
        cout << "the i: "<<i<<"the value: "<< a[i] <<endl;
    }

    return 0;
}
