#include <bits/stdc++.h> 
using namespace std;
int firstOccurence(vector<int>& arr, int n, int key) {
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int LastOccurence(vector<int>& arr, int n, int key) {
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair <int, int> p;
    p.first = firstOccurence(arr, n, k);
    p.second = LastOccurence(arr, n, k);
    return p;
}
// int main() {
//     int even[6] = {1, 3, 3, 3, 4, 6};
//     cout << "First occurence of 3 is " << firstOccurence(even, 6, 3) << endl;
//     cout << "Last occurence of 3 is " << LastOccurence(even, 6, 3);

// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
    // Write your code here
// }