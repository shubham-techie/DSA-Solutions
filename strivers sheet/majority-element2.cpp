[https://leetcode.com/problems/majority-element-ii/]

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size(), maj1{}, maj2{}, cnt1{},cnt2{};
        
        for(int& i:nums)
            if(maj1==i) ++cnt1;
            else if(maj2==i) ++cnt2;
            else if(cnt1==0) cnt1=1, maj1=i;
            else if(cnt2==0) cnt2=1, maj2=i;
            else --cnt1, --cnt2;
        
        cnt1=0, cnt2=0;
        for(int& i:nums)
            if(i==maj1) ++cnt1;
            else if(i==maj2) ++cnt2;
                
        if(cnt1>n/3 && cnt2<=n/3)
            return {maj1};
        if(cnt2>n/3 && cnt1<=n/3)
            return {maj2};
        if(cnt1>n/3 && cnt2>n/3)
            return {maj1,maj2};
        
        return {};
    }
};
