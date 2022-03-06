#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        
        for(auto& it:nums){
            
            auto itr=umap.find(it);
            
            if(itr==umap.end())
                umap.insert({it,1});
            
            else
                return true;
            
        }
        return false;
    }
};


int main(){
    Solution s;
    vector<int> v{1,2,3,1};
    
    cout<<boolalpha<<s.containsDuplicate(v);
    return 0;
}