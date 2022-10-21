#include <bits/stdc++.h> 

int sqrtN(long long int N)
{
    // Write your code here.
    int s = 0;
    int e = N;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s <= e) {
        long long int square = mid*mid;
        if(square == N) { 
            return mid;
        }
        if (square < N) { 
//             e = mid - 1;
            ans = mid;
            s = mid + 1;
        }
        else {
//             ans = mid;
//             s = mid + 1;
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}