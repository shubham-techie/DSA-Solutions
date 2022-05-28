class Solution {
public:
    string largestWordCount(vector<string>& mssg, vector<string>& sndr) {
        
        int n=mssg.size();
        vector<int> wc(n);
        unordered_map<string, int> map{};
        int mx_cnt{};
        string res="";
        
        for(int i=0;i<n;++i){
            wc[i]=count(mssg[i].begin(), mssg[i].end(), ' ') +1;
            int total=map[sndr[i]]+=wc[i];
            
            if(total>mx_cnt || (total==mx_cnt && sndr[i]>res)){
                mx_cnt=total;
                res=sndr[i];
            }
        }
        
        return res;
    }
};