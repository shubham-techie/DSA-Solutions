void miniMaxSum(vector<int> arr) {
    int min=INT_MAX;
    int n=arr.size();
    long long min_sum{},max_sum{};
    
   sort(arr.begin(),arr.end());
    
    for(int i=0;i<4;++i){
        min_sum+=arr[i];
        max_sum+=arr[n-1-i];
    }
    
    cout<<min_sum<<" "<<max_sum;
}
