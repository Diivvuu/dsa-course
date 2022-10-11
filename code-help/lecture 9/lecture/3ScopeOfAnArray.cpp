#include<iostream>
using namespace std;


void Update(int arr[], int size) {
    cout << "Inside the function" << endl;

    //update the array
    arr[0]=111;
    for (int i = 0; i < size; i++)  {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Getting back to main" << endl;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) { 
        cin >> a[i];
    }
    Update(a, n);
    for (int i = 0; i < n; i++)  {
        cout << a[i] << " ";
    }
}