bool isPossible(vector<int> boards, int k, int mid) {
    int boardCount = 1;
    int length = 0;
    for(int i = 0; i < boards.size(); i++) {
        if(length + boards[i] <= mid) {
            length += boards[i];
        }
        else {
            boardCount++;
            if(boardCount> k || boards[i] > mid) {
                return false;
            }
            length = boards[i];
        }
        if(boardCount > k) {
            return false;
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int start = 0;
    int sum = 0;
    int ans = -1;
    for(int i = 0; i < boards.size(); i++)  {
        sum += boards[i];
    }
    int end = sum;
    int mid = start + (end - start)/2;
    while (start <= end) { 
        if(isPossible(boards, k , mid)){ 
            end = mid-1;
            ans = mid;
        }
        else { 
            start = mid + 1;
        }
        mid = start + (end - start)/2;      
    }
    return ans; 
}