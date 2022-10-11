#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end - start/2);
    while(start < end) {
        if(arr[mid] == key) {
            return mid;
        }
        if(arr[mid] < key) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start + (end-start/2);
    }
    return -1;
}
int main() {
    int even[6] = {1, 2, 34, 89, 91, 98};
    int odd[7] = {1, 5, 23, 58, 79, 91, 99};
    int evenIndex = binarySearch(even, 6, 98);
    int oddIndex = binarySearch(odd, 7, 6);
    cout << "Even index of 98 is " << evenIndex << endl;
    cout << "Odd index 6 is " << oddIndex;
}