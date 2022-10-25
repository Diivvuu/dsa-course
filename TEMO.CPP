#include <bits/stdc++.h> 
bool isPossible(vector<int> arr, int n, int m,int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    
    for(int i = 0 ; i<n ; i++){
        if(pageSum+arr[i]<=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
               return false;
            }    
            pageSum = arr[i];
            if(studenCount > m ){
               return false;    
            }
        }
    }
    return true;
}