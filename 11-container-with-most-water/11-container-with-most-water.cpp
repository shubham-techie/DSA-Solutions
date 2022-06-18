class Solution {
public:
    int maxArea(vector<int>& ht) {
        int mx_water{}, i{}, j=ht.size()-1;
        
       while(i<j){
           int h=min(ht[i],ht[j]);
           mx_water=max(mx_water, (j-i)*h);
           
           while(i<j && ht[i]<=h) ++i;
           while(i<j && ht[j]<=h) --j;
       }
        return mx_water;
    }
};