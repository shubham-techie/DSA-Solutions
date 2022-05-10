class Solution {
    List<List<Integer>> res=new ArrayList();
    
    void backtrack(int k, int n, int start, LinkedList ll){
        if(k<0 || n<0)
            return;
        
        if(k==0 && n==0){
            res.add(new ArrayList(ll));
            return;
        }
        
        for(int i=start; i<10;++i){
            ll.add(i);
            backtrack(k-1, n-i, i+1, ll);
            ll.removeLast();
        }
    }
    
    public List<List<Integer>> combinationSum3(int k, int n) {
        backtrack(k, n, 1, new LinkedList());
        
        return res;
    }
}