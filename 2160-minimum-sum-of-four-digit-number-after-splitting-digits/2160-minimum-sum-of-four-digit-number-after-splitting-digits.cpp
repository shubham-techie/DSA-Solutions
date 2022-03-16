class Solution {
public:
    int minimumSum(int num) {
        
        vector<int> v(4);
        
        for(int i=0;num>0;++i,num/=10)
            v[i]=num%10;
        
        sort(v.begin(),v.end());
        
        return (v[0]+v[1])*10+v[2]+v[3];
    }
};