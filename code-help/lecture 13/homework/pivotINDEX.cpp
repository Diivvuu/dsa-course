class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int totalSum = 0;
        for(int i = 0; i < arr.size(); i++) {
            totalSum += arr[i];
        }
        int leftSum = 0;
        int rightSum = totalSum;
        for(int i = 0; i < arr.size(); i++) {
            rightSum = rightSum - arr[i];
            if(leftSum == rightSum) {
                return i;
            }
            leftSum+=arr[i];
        }
        return -1;
    }
};