// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    
    bool binarySearch(vector<int>& v, int x){
        int l{},h=v.size()-1;
        
        while(l<=h){
            int mid=(l+h)/2;
            
            if(v[mid]==x)
                return false;
            if(v[mid]<x)
                l=mid+1;
            else if(v[mid]>x)
                h=mid-1;
        }
        return true;
    }
    
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        /* Method 1: sorting and counting
        sort(a,a+n);
        sort(b,b+m);
        
        int i{},j{},ans{};
        
        while(i<n && j<m){
            
            if(a[i]==b[j]){
                ++ans;
                ++i;
                ++j;
            }
            else if(a[i]<b[j]){
                ++ans;
                ++i;
            }
            else if(a[i]>b[j]){
                ++j;
                ++ans;
            }
            
            while(i<n && a[i]==a[i-1]) ++i;
            while(j<m && b[j]==b[j-1]) ++j;
        }
        
        while(i<n){
            ++i;
            ++ans;
            while(i<n && a[i]==a[i-1]) ++i;
        }
        
        while(j<m){
            ++j;
            ++ans;
            while(j<m && b[j]==b[j-1]) ++j;
        }
        return ans;
        */
        
        sort(a,a+n);
        sort(b,b+m);
        
        vector<int> v1{},v2{};
        
        for(int i=0;i<n;){
            v1.emplace_back(a[i++]);
            
            while(i<n && a[i]==a[i-1]) ++i;
        }
        
        for(int i=0;i<m;){
            v2.emplace_back(b[i++]);
            
            while(i<m && b[i]==b[i-1]) ++i;
        }
        
        int ans=v2.size();
        for(int i=0;i<v1.size();++i){
            if(binarySearch(v2, v1[i]))
                ++ans;
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends