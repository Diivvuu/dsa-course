#include<iostream>
using namespace std;


int getMin(int arr[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) { 
        if (arr[i] < min) { 
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) { 
        if (arr[i] > max) { 
            max = arr[i];
        }
    }
    return max;
}
int main() { 
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Maximum value is " << getMax(a, n) << endl;
    cout << "Minimum value is " << getMin(a, n) << endl;

    return 0;
}