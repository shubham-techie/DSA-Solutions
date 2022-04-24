// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    using ll=long long;
    
    ll merge(ll arr[],ll tmp[],int l, int m, int r){
        ll cnt{};

        int i{l},k{l},j{m};
        
        while(i<m && j<=r){
            if(arr[i]>arr[j]){
                cnt+=m-i;
                tmp[k++]=arr[j++];
            }
            else
            tmp[k++]=arr[i++];
        }
        
        while(i<m)
            tmp[k++]=arr[i++];
        
        while(j<=r){
            tmp[k++]=arr[j++];
        }
        
        for(i=l;i<=r;++i)
            arr[i]=tmp[i];
        
        return cnt;
    }
    
    ll mergeSort(ll arr[],ll tmp[],int l, int r){
        ll cnt{};
        
        if(l<r){
           int m=(l+r)/2;
           cnt+= mergeSort(arr,tmp,l,m);
           cnt+= mergeSort(arr,tmp,m+1,r);
           cnt+= merge(arr,tmp,l,m+1,r);
        }
        
        return cnt;
    }
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        ll *tmp=new ll[n];
        return mergeSort(arr,tmp,0,n-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends