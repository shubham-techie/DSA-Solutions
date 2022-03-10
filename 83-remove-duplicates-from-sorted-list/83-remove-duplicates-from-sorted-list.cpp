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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        
        while(temp && temp->next){
            ListNode *ptr=temp->next;
            
            if(temp->val==ptr->val)
                temp->next=ptr->next;
            
            else
                temp=temp->next;
        }
        return head;
    }
};