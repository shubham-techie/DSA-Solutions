/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        /* Method 1: Counting elements and swapping
        
        ListNode *tmp{head},*pt1{},*pt2{};
        int n{}, pos1{k},pos2{};
        
        while(tmp){
            ++n;
            if(pos1){
                --pos1;
                pt1=tmp;
            }
            tmp=tmp->next;
        }
        
       tmp=head;
        pos2=n-k+1;
        while(pos2--){
            pt2=tmp;
            tmp=tmp->next;
        }
        
        swap(pt1->val,pt2->val);
        return head;
        */
        
        
        // Method 2: two pointer approach
        ListNode *ptr1{},*ptr2{};
        
        for(auto tmp=head;tmp!=nullptr;tmp=tmp->next){
            if(k){
                --k;
                ptr1=tmp;
                ptr2=k==0?head:nullptr;
                continue;
            }
            
            if(!k)
                ptr2=ptr2->next;
        }
        
        swap(ptr1->val,ptr2->val);
        return head;
    }
};