#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    double average(vector<int>& salary) {
        
        int min{salary[0]};
        int max{salary[1]};
        double sum{0.0};
        
        if(salary[0]>salary[1])
        {
            int temp=max;
            max=min;
            min=temp;
        }
            
        for(int i=2;i<salary.size();++i){
            if(salary[i]<min){
                sum+=min;
                min=salary[i];
            }
            else if(salary[i]>max){
                sum+=max;
                max=salary[i];
            }
            else
                sum+=salary[i];
        }
        return sum/(1.00*salary.size()-2.00);
    }
};


int main(){
    Solution s;
    
    vector<int> v{4000,3000,1000,2000};

    cout<<s.average(v);
    return 0;
}