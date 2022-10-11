#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) { 
        cout << arr[i] << " ";
    }
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) { 
        cin >> a[i];
    }
    printArray(a, n);
}