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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* resList=new ListNode();
        ListNode* head=resList;
        
        while(l1 && l2){
            if(l1->val<l2->val){
                resList->next=l1;
                l1=l1->next;
            }    
            else{
                resList->next=l2;
                l2=l2->next;
            }
            
            resList=resList->next;
        }
        
        while(l1){
            resList->next=l1;
            l1=l1->next;
            resList=resList->next;
        }

        while(l2){
            resList->next=l2;
            l2=l2->next;
            resList=resList->next;
        }

        return head->next;
    }
};