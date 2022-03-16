class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum{};
        
        if(n==1)
            return arr[0];
        
        for(int i=0;i<n-2;++i)
            for(int j=i;j<n;j+=2)
                for(int k=i;k<=j;++k)
                    sum+=arr[k];
        
        sum+=arr[n-2]+arr[n-1];       
        return sum;
    }
};