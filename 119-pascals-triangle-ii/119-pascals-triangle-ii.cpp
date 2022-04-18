class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        long tmp{1};
        vector<int> v(rowIndex+1,1);
        
        for(int i=1,up=rowIndex,down=1;i<rowIndex;++i,--up,++down){
            tmp=tmp*up/down;
            v[i]=tmp;
        }
        
        return v;
    }
};