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
struct pair getMinMax(long long int arr[], long long int n) {
   struct pair p;
   p.min=INT_MAX;
   p.max=INT_MIN;
   
   for(int i=0;i<n;++i){
        if(p.min>arr[i]) p.min=arr[i];
         if(p.max<arr[i]) p.max=arr[i];
   }
   
   return p;
}