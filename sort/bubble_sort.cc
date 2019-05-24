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

void bubbleSort1(int a[], int size)
{
    // main process
    cout << "bubble sort 1" << endl;
    for (int i = 0; i < size-1; i++)
    {
        int min = a[i];
        int flag = i;
        for (int j = i+1; j < size; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                flag = j;
            }
        }

        if (flag != i)
        {
            int tmp = a[i];
            a[i] = a[flag];
            a[flag] = tmp;
        }
    }

    cout << "after bubble sort value: " << endl;
    for (int n = 0; n < 10; n++)
    {
        cout << "the n is " << n << "the value is " << a[n] << endl;
    }
}

void bubbleSort2(int a[], int size)
{
    // real bubble
    cout << "bubble sort2 " << endl;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (a[j] < a[j-1])
            {
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }

    cout << "after bubble sort value: " << endl;
    for (int n = 0; n < 10; n++)
    {
        cout << "the n is " << n << "the value is " << a[n] << endl;
    }
}

void bubbleSort3(int a[], int size)
{
    // bubble optimization
    cout << "bubble sort3 " << endl;
	int flag = true;
    for (int i = 0; i < size - 1 && flag; i++)
    {
		int flag = false;
        for (int j = size - 1; j > i; j--)
        {
            if (a[j] < a[j-1])
            {
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
				flag = true;
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
    //bubbleSort0(a, size);
    //bubbleSort1(a, size);
    //bubbleSort2(a, size);
    bubbleSort3(a, size);

    return 0;
}

