void plusMinus(vector<int> arr) {
    int n=arr.size();
    
    unordered_map<char,int> map={
        {'p',0},
        {'n',0},
        {'z',0}
        
    };

    for(auto& it:arr)
        if(it>0) ++map['p'];
        else if(it<0) ++map['n'];
        else ++map['z'];
        
        setprecision(6);
        cout<<map['p']*1.00/n<<"\n";
        cout<<map['n']*1.00/n<<"\n";
        cout<<map['z']*1.00/n<<"\n";   
}
