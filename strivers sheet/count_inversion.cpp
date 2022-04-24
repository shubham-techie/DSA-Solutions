[https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#]

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
        
        while(j<=r)
            tmp[k++]=arr[j++];
        
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
    
    
    /*
     ll cnt{};
    multiset<int> set;

    for(int i=0;i<n;++i){
        set.insert(arr[i]);
        auto it=set.upper_bound(arr[i]);
        cnt+=distance(it,set.end());
    }
    
    return cnt;
    */
    }
