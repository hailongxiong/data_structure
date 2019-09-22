#include <iostream>
#include <vector>

using namespace std;

void maxHeap(vector<int> &arr) {
    int size = arr.size();
    if (size <= 1) {
        return;
    }
    
    for (int i=(size-1)/2; i>=0;i--) {
        int son = 2*i+1;
        while (son < size) {
            int parent = (son-1)/2;
            if (son < size-1 && arr[son]<arr[son+1]) {
                son++;
            }

            if (arr[parent]>arr[son]) {
                break;
            } else {
                int tmp = arr[son];
                arr[son] = arr[parent];
                arr[parent] = tmp;
                son = 2*son+1;
            }
        }
    }
}

void maxHeapInsert(vector<int> &arr, int x) {
    arr.push_back(x);

    int size = arr.size();
    if (size == 1) {
        return;
    }

    int son = size - 1;
    while(son != 0 && x>arr[(son-1)/2]) {
        int tmp = arr[(son-1)/2];
        arr[(son-1)/2] = arr[son];
        arr[son] = tmp;

        son = (son-1)/2;
        x = arr[son];
    }
}

int main() {
    int a[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};

    vector<int> arr(a, a+14);
    for (int i=0; i<arr.size();i++) {
        cout<<"origin value: " << arr[i] << endl;
    }

    maxHeap(arr);

    for (int i=0; i<arr.size();i++) {
        cout <<"result value: "<< arr[i] << endl;
    }

	maxHeapInsert(arr, 14);

    for (int i=0; i<arr.size();i++) {
        cout <<"last result value: "<< arr[i] << endl;
    }
    
    return 0;
}
