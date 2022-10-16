#include <bits/stdc++.h>
void sort012(int *arr, int n) 
{
    int i = 0;
    int One = 0;
    int Two = n-1;
    while(i  <= Two) {
        if(arr[i] == 0) {
            swap(arr[i], arr[One]);
            i++;
            One++;
        }
        else if(arr[i] == 1){
            i++;
        }
        else {
            swap(arr[i], arr[Two]);
            Two--;
        }
    }
}