class Solution {
public:
    double average(vector<int>& salary) {
        
        int mx{salary[1]}, mn{salary[0]}, sum{};
        
        if(mx<mn) swap(mx,mn);
        
        for(int i=2;i<salary.size();++i){
            if(salary[i]<mn){
                sum=sum+mn;
                mn=salary[i];
            }
            else if(salary[i]>mx){
                sum=sum+mx;
                mx=salary[i];
            }
            else
                sum=sum+salary[i];
        }
        
        return 1.00*sum/(salary.size()-2.00);
    }
};