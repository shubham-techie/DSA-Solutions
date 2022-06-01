class Solution {
public:
    void addRange(const int mn, const int mx, vector<string>& v){
        if(mn!=mx)
            v.push_back(to_string(mn) +"->"+ to_string(mx));
        else
            v.push_back(to_string(mn));
    }
    
    vector<string> summaryRanges(vector<int>& nums) {
        if(!nums.size()) return {};
        
        int n=nums.size(), mn, mx;
        mn=mx=nums[0];
        vector<string> v{};
        
        for(int i=1;i<n;++i){
            if(nums[i]==mx+1)
                ++mx;
            else{
                addRange(mn,mx, v);
                mn=mx=nums[i];
            }
        }
        addRange(mn,mx, v);
        
        return v;
    }
};