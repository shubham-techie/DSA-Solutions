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
   /* Method 1: Linear search
   p.min=INT_MAX;
   p.max=INT_MIN;
   
   for(int i=0;i<n;++i){
        if(p.min>arr[i]) p.min=arr[i];
         if(p.max<arr[i]) p.max=arr[i];
   }
   
   return p;
   */
   
   /* Method 2: Tournament method
   return getMnMx(arr,0,n-1);
   */
   
   //Method 3: Comparsion pairs
   int i;
   
   if(n&1){
       p.min=p.max=arr[0];
       i=1;
   }
   
   else if(!(n&1)){
       if(arr[0]>arr[1]){
           p.max=arr[0];
           p.min=arr[1];
       }
       else{
           p.max=arr[1];
           p.min=arr[0];
       }
       i=2;
   }
   
   for(;i<n-1;i+=2){
       if(arr[i]>arr[i+1]){
           if(arr[i]>p.max) p.max=arr[i];
           if(arr[i+1]<p.min) p.min=arr[i+1];
       }
       else{
           if(arr[i+1]>p.max) p.max=arr[i+1];
           if(arr[i]<p.min) p.min=arr[i];
       }
   }
   
   return p;
}
