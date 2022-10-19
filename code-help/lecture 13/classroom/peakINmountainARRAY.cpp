class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size() - 1;
        int mid = start + (end - start)/2;
        while(start < end) {
            if(arr[mid] < arr[mid+1]){
                start = mid + 1;
            }
            else {
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        return start;
    }
};

//better solution
/*
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for(int i = 0; i < arr.size()-1; i++) { 
            if(arr[i] > arr[i+1]) {
                return i;
            }
        }
        return 0;
    }
};
*/



//testing
// #include<iostream>
// using namespace std;
// int peakIndexInMountainArray(int *arr) {
//     int start = 0, end = sizeof(arr) - 1;
//     int mid = start + (end - start)/2;
//     while(start < end) {
//         if(arr[mid] < arr[mid+1]){
//             start = mid + 1;
//         }
//         else {
//             end = mid;
//         }
//         mid = start + (end - start)/2;
//     }
//     return start;
// }
// int main() {
//     int arr[4] = {0,2,1,0};
//     cout << "Peak index of given array is " <<peakIndexInMountainArray(arr);
// }