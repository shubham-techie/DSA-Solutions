// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    
    void backtrack(vector<int>& a, int i, int sum, vector<int>& v){
        if(i==a.size()){
            v.push_back(sum);
            return;
        }
        
        sum+=a[i];
        backtrack(a, i+1, sum, v);
        
        sum-=a[i];
        backtrack(a, i+1, sum, v);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> v{};

        backtrack(arr, 0, 0, v);
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends