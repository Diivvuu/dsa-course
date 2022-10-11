#include<iostream>
using namespace std;
void reverseArray(int arr[], int size) {
    int i = 0, j = size-1;
    while(i < j) { 
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    reverseArray(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}