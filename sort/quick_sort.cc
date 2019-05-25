#include <iostream>
using namespace std;

int a[] = {2, 3, 56, 7, 9, 20, 8, 88, 12, 9};
const int size = 10;

int partition(int a[], int low, int high)
{
    int pivot_key = a[low];// 取值可以优化
    while(low < high)
    {
        while(low<high && a[high]>=pivot_key)
            high--;
        // 可以使用赋值来替换交换
        int tmp = a[high];
        a[high] = a[low];
        a[low] = tmp;

        // 可以优化递归
        while(low<high && a[low]<=pivot_key)
            low++;
        tmp = a[high];
        a[high] = a[low];
        a[low] = tmp;
    }

    return low;
}

void quickSort(int a[], int low, int high)
{
    int  pivot;
    if (low < high)
    {
        pivot = partition(a, low, high);

        quickSort(a, low, pivot-1);
        quickSort(a, pivot+1, high);
    }
}

int main()
{
    int low = 0;
    int high = size;
    quickSort(a, low, high);

    for (int i=0; i<size; i++)
    {
        cout<<"the i: " << i << "the value: " << a[i] << endl;
    }

    return 0;
}

