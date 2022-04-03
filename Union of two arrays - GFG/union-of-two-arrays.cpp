// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        //Method 1: using set
        unordered_set<int> s(a,a+n);

        for(int i=0;i<m;++i)
            s.insert(b[i]);
            
        return s.size();
        
        
        /* Method 2: using mapping
        unordered_map<int,int> map;
        
        for(int i=0;i<n;++i)
            if(!map[a[i]])
                ++map[a[i]];
                
        for(int i=0;i<m;++i)
            if(!map[b[i]])
                ++map[b[i]];
        
        return map.size();
        */
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