// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> pos{}, neg{};
        
        for(int i=0;i<n;++i){
            if(arr[i]<0)
                neg.emplace_back(arr[i]);
            else
                pos.emplace_back(arr[i]);
        }
        
        int i{};
        
        for(;i<pos.size();++i)
            arr[i]=pos[i];
            
        for(int& j:neg)
            arr[i++]=j;
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends