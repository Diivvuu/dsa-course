bool minPossibleTime(vector<int> &rank, int m, int mid){
    int dishes = 0;
    int sum = 0;
    for(int i = 0; i < rank.size(); i++){
        for(int j = 1; j <= m; j++){
            sum += rank[i]*j;
                if(sum <= mid)
                    dishes++;
                if(dishes == m){
                    return true;
                }
            }
        sum = 0;    
    }
    return false;
}
int minCookTime(vector<int> &rank, int m){
    // Write your code here
    int s = 0; 
    int e = 0, ans = 0;    
    for(int i = 1; i <= m; i++){
        e += rank[rank.size()-1]*i;
    }
// cout<<"e:"<<e<<endl;
    int mid = s + (e-s)/2;
    while(s <= e){
// cout<<"minPossibleTime"<<minPossibleTime(rank, m, mid)<<endl;
    if(minPossibleTime(rank, m, mid)){
        ans = mid;
// cout<<"ans: "<<ans<<" ";
        e = mid -1;
// cout<<"e:"<<e<<endl;
        }
        else{
            s = mid + 1;
// cout<<"s:"<<s<<endl;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}