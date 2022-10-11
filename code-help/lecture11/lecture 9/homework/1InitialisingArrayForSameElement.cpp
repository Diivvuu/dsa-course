#include<iostream>
using namespace std;
int main() { 
    int n, element;
    cin >> n;
    int a[n];
    cout << "Enter the element : ";
    cin >> element;
    for(int i = 0; i < n; i++) { 
        a[i] = element;
    }
    for(int i = 0; i < n; i++) { 
        cout << a[i] << " ";
    }
}