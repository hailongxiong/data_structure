#include <iostream>
using namespace std;

int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
const int size = 10;

int binarySearch(int a[], int key, int size)
{
    int mid, low, high;
    low = 0;
    high = size;
    while(high >= low)
    {
        //mid = (low+high)/2;
        mid = low + (key-a[low])*(high-low)/(a[high]-a[low]);
        cout << mid;
        if (a[mid] > key)
        {
            high = mid-1;
        } else if(a[mid] < key) {
            low = mid+1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int value;
    cout << "input value: " << endl;
    cin >> value;

    int location = binarySearch(a, value, size);
    if (location == -1)
    {
        cout << "could not find "<< endl;
    } else {
        cout << "the location: " << location << " the value: "<< a[location]<<endl;
    }

    return 0;
}
