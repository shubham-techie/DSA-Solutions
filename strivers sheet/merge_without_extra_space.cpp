[https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1]

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here
            
            /* method 1: traverse arr1 and insertion sort in arr2
            for(int i=0;i<n;++i){
                if(arr1[i]>arr2[0])
                    swap(arr1[i],arr2[0]);
                    
                int tmp=arr2[0],j{};
                
                for(j=1;j<m;++j)
                    if(arr2[j]<tmp)
                        arr2[j-1]=arr2[j];
                    else 
                        break;
                arr2[j-1]=tmp;
            }
            */
            
            
            /* method 2: traverse arr2 and insertion sort in arr1
            for(int i=m-1;i>=0;--i){
                if(arr1[n-1]>arr2[i])
                    swap(arr1[n-1],arr2[i]);
                    
                int tmp{arr1[n-1]},j{};
                
                for(j=n-2;j>=0;--j)
                    if(arr1[j]>tmp)
                        arr1[j+1]=arr1[j];
                    else
                        break;
                arr1[j+1]=tmp;
            }
            */
            
            
            /* method 3: traverse arr1 from back and arr2 from front
            for(int i{n-1}, j{};i>=0 && j<m;--i,++j)
                if(arr1[i]>arr2[j])
                    swap(arr1[i],arr2[j]);
            
            
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            */
            
            
            // Gap method
            int gap=ceil((m+n)/2.0);
            
            while(gap>0){
                
                for(int i{},j{gap};j<(m+n);++i,++j){
                    
                    if(j<n && arr1[i]>arr1[j])
                        swap(arr1[i],arr1[j]);
                        
                    else if(j>=n && i<n && arr1[i]>arr2[j-n])
                        swap(arr1[i],arr2[j-n]);
                        
                    else if(j>=n && i>=n && arr2[i-n]>arr2[j-n])
                        swap(arr2[i-n],arr2[j-n]);
                }
              
                gap=(!(gap^1))? 0 : ceil(gap/2.0);
            }
            
        } 
};
