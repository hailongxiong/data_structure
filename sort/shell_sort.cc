#include <iostream>
using namespace std;

int a[] = {1,2,3,4,5,1,3,55,34,56,77,71,62,2,3};
const int size = 15;

void shell_sort(int a[], int size)
{
    int i, j;
    int increment = size;
    do
    {
        increment = increment/3+1;
        for (i=increment; i<size; i++)
        {
            if (a[i] < a[i-increment])
            {
                int tmp = a[i];
                for (j=i-increment; j>0&&tmp<a[j]; j-=increment)
                    a[j+increment] = a[j];
                a[j+increment] = tmp;
            }
        }
    }
    while(increment>1);
}

int main()
{
    shell_sort(a, size);

    for (int i=0; i<size; i++)
    {
        cout<<"the i: "<<i<<"the value: "<< a[i] <<endl;
    }
    return 0;
}
