class Solution {
    List<List<Integer>> res=new ArrayList<>();
    
    void backtrack(int[] nums, int start, LinkedList<Integer> l){
        if(start==nums.length){
            res.add(new ArrayList(l));
            return;
        }
        
        l.add(nums[start]);
        backtrack(nums, start+1, l);
        l.removeLast();
        
        backtrack(nums, start+1, l);
    }
    
    
    public List<List<Integer>> subsets(int[] nums) { 
        /*
        backtrack(nums, 0, new LinkedList<Integer>());
        return res;
        */
        
        
        /*
        List<List<Integer>> resu=new ArrayList<>();
        resu.add(new ArrayList<Integer>());
        
        for(int j : nums){
            int n=resu.size();
            
            for(int i=0;i<n;++i){
                List<Integer> l=new ArrayList<>(resu.get(i));
                
                l.add(j);
                resu.add(l);
            }
        }
        
        return resu;
        */
        
        
        int n=nums.length;
        int size=1<< n;    //2^n
        
        for(int j=0;j<size;++j){
            List<Integer> l=new ArrayList();

            for(int i=0;i<n;++i)
                if((j & (1<<i))!=0)
                    l.add(nums[i]);
            res.add(l);
        }
        
        return res;
    }
}