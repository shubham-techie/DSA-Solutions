// { Driver Code Starts
// Initial Template for C

#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}// } Driver Code Ends

// User function Template for C
#include<limits.h>
struct pair getMnMx(long long arr[],int low,int high){
    struct pair p,ptmp1,ptmp2;
   
   if(low==high){
       p.min=p.max=arr[low];
       return p;
   }
   
   if(low+1==high){
       if(arr[low]>arr[high]){
           p.max=arr[low];
           p.min=arr[high];
       }
       else{
           p.min=arr[low];
           p.max=arr[high];
       }
       return p;
   }
   
   int mid=(low+high)/2;
   ptmp1=getMnMx(arr,low,mid);
   ptmp2=getMnMx(arr,mid+1,high);
   
   if(ptmp1.min<ptmp2.min)
       p.min=ptmp1.min;
    else
        p.min=ptmp2.min;
    
    if(ptmp1.max>ptmp2.max)
       p.max=ptmp1.max;
    else
        p.max=ptmp2.max;
        
   return p;
   
}

struct pair getMinMax(long long int arr[], long long int n) {
   
   struct pair p;
   /*
   p.min=INT_MAX;
   p.max=INT_MIN;
   
   for(int i=0;i<n;++i){
        if(p.min>arr[i]) p.min=arr[i];
         if(p.max<arr[i]) p.max=arr[i];
   }
   
   return p;
   */
   
   //Tournament method
   return getMnMx(arr,0,n-1);
}