#include<iostream>
using namespace std;
int findUnique(int arr[], int size) {
    int unique = 0;
    for(int i=0; i<size; i++) { 
        unique ^= arr[i];
    }
    return unique;
}
int main() { 
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    cout << findUnique(a, n);
}