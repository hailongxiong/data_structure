#include <iostream>
using namespace std;

int a[] = {-1, 3, 11, 23, 2, 4, 5, 10, 22, 25, 99};
const int size = 11;

int seqSort(int a[], int key, int size)
{
    for (int i=1; i<size; i++)
    {
        if (a[i]==key)
        {
            return i;
        }
    }

    return 0;
}

int seqSort1(int a[], int key, int size)
{
    a[0] = key;
    int i=size;
    while(a[i]!=a[0])
    {
        i--;
    }

    return i;
}

int main()
{
    int value;
    cout << "input value:"<<endl;
    cin>>value;
    //int location = seqSort(a, value, size);
    int location = seqSort1(a, value, size);
    if (location != 0)
    {
        cout << "the location: " << location << "the value: "<< a[location] << endl;
    } else {
        cout << "could not find value." <<endl;
    }
    return 0;
}
