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
        
        while(j>=0)
            v1[k--] = (i>=0 && v1[i]>=v2[j])? v1[i--]:v2[j--];
    }
};