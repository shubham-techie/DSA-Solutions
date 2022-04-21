// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            // for(int i=0;i<n;++i){
            //     if(arr1[i]>arr2[0])
            //         swap(arr1[i],arr2[0]);
                    
            //     int tmp=arr2[0],j{};
                
            //     for(j=1;j<m;++j)
            //         if(arr2[j]<tmp)
            //             arr2[j-1]=arr2[j];
            //         else 
            //             break;
            //     arr2[j-1]=tmp;
            // }
            
            /*
            for(int i{n-1}, j{};i>=0 && j<m;--i,++j)
                if(arr1[i]>arr2[j])
                    swap(arr1[i],arr2[j]);
            
            
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            */
            
            //Gap method
            int gap=ceil(m+n)/2.0;
            
            while(gap>0){
                
                for(int i{},j{gap};j<(m+n);++i,++j){
                    
                    if(j<n && arr1[i]>arr1[j])
                        swap(arr1[i],arr1[j]);
                        
                    else if(j>=n && i<n && arr1[i]>arr2[j-n])
                        swap(arr1[i],arr2[j-n]);
                        
                    else if(j>=n && i>=n && arr2[i-n]>arr2[j-n])
                        swap(arr2[i-n],arr2[j-n]);
                }
              
                if (gap == 1) 
                    gap = 0;
                else 
                    gap = ceil((float) gap / 2);
            }
        } 
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends