class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        /* O(n*m)
        if(n){
            int i{m-1};

            for(int j=n-1;j>=0;--j){
                int i{m-1};

                while(i>=0 && v1[i]>v2[j])
                    --i;

                ++m;++i;

                for(int tmp=m-1;tmp>i;--tmp)
                    v1[tmp]=v1[tmp-1];

                v1[i]=v2[j];
            }
        }
        */
        
        int i{m-1},j{n-1},k{m+n-1};
        
        while(i>=0 && j>=0){
            if(v2[j]>=v1[i]){
                v1[k]=v2[j];
                --k;
                --j;
            }
            else if(v1[i]>v2[j]){
                v1[k]=v1[i];
                --k;
                --i;
            }
        }
       
        while(j>=0){
            v1[k]=v2[j];
            --k;
            --j;
        }
    }
};