class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        
        int up=0, dn=matrix.length-1, lt=0, rt=matrix[0].length-1, dir=0;
     List<Integer> list=new ArrayList<Integer>();
        
        while(up<=dn && lt<=rt){
            
            switch(dir){
                case 0: 
                    for(int i=lt;i<=rt;++i)
                        list.add(matrix[up][i]);
                    ++up;
                    break;
                    
                case 1:
                    for(int i=up;i<=dn;++i)
                        list.add(matrix[i][rt]);
                    --rt;
                    break;
                    
                case 2:
                    for(int i=rt;i>=lt;--i)
                        list.add(matrix[dn][i]);
                    --dn;
                    break;
                    
                case 3:
                    for(int i=dn;i>=up;--i)
                        list.add(matrix[i][lt]);
                    ++lt;
                    break;
            }
            dir=(dir+1)%4;
        }
        return list;
    }
}