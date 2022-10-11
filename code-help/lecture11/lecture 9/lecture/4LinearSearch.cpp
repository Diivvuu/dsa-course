#include<iostream>
using namespace std;
bool search(int arr[], int size, int k) {
    for(int i = 0; i < size; i++) { 
        if(arr[i] == k) {
            return true;
        }
    }
    return false;
}
int main(){
    int n, element;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n; i++) { 
        cin >> a[i];
    }
    cout << "Enter the element you want to search : ";
    cin >> element;
    bool var;
    var = search(a, n, element);
    if(var == true) {
        cout << "Element is present";
    }
    else {
        cout << "Element is absent";
    }
}