// https://leetcode.com/problems/unique-number-of-occurrences/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool uniqueOccurrences(int arr[], int size) {
    vector<int> ans;
    sort(arr, arr+size);
    int i = 0;
    while(i < size) {
        int count = 1;
        for(int j = i+1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
            else {
                break;
            }
        }
        i+=count;
        ans.push_back(count);
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size()-1; i++) { 
        if(ans[i] == ans[i+1]) {
            return false;
        }
    }
    return true;
}
int main() { 
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++ ) {
        cin >> a[i];
    }
    if (uniqueOccurrences(a, n)) {
        cout << "True";
    }
    else {
        cout << "False";
    }
}