#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i = 1; i < n; i++) { //start 1 index se krna ae 0 se nai
        int temp = arr[i];
        int j = i-1;
        for(;j >= 0; j--) {
            if(arr[j] > temp){
                //shift
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}