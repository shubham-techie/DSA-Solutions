/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    int countNodes(ListNode* root){
        int cnt1=0;
        
        while(root){
            ++cnt1;
            root=root->next;
        }
        return cnt1;
    }
    
    ListNode* shiftNode(ListNode* root, int n){
        
        while(n--)
            root=root->next;
        
        return root;
    }
    
    ListNode *getIntersectionNode(ListNode *ha, ListNode *hb) {
        
        int cnt1= countNodes(ha);
        int cnt2= countNodes(hb);
        
        if(cnt1>cnt2){
            ha=shiftNode(ha, cnt1-cnt2);
        }
        else if(cnt2>cnt1)
            hb=shiftNode(hb, cnt2-cnt1);
        
        
        while( ha && hb){
            if(ha==hb) 
                return ha;
            ha=ha->next;
            hb=hb->next;
        }
        return nullptr;
    }
};