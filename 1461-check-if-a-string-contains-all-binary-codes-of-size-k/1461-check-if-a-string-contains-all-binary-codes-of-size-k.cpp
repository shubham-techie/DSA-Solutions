class Solution {
public:
    unordered_map<string,bool> map{};
    
    void hashTable(string s, int k){
        if(s.size()==k){
            map[s]=false;
            return;
        }
        
        hashTable(s+'0',k);
        hashTable(s+'1',k);
    }
    
    bool hasAllCodes(string s, int k) {
        /*
        hashTable("", k);
        
        for(auto& m:map){
            if(s.find(m.first)!=string::npos)
                m.second=true;
        }
        
         return !any_of(map.begin(), map.end(), [](const auto& m){
            return m.second==false;
        });
        */
        
        if(s.size()<k) return false;
        
        unordered_set<string> set{};
        int size=s.size();
            
        for(int i=0;i<=size-k;++i)
            set.insert(s.substr(i, k));
        
        return set.size()==pow(2,k);
    }
};