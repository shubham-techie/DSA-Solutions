class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        max_len=0
        
        for sen in sentences:
            len_sen=len(sen.split())
            max_len=max(max_len,len_sen)
            
        return max_len
            