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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int cnt{};
        
        ListNode* curr=head;
        
        while(curr!=nullptr){
            ++cnt;
            curr=curr->next;
        }
        
        n=cnt-n;
        
        if(n==0)
            head=head->next;        
        else{
            curr=head;
            while(--n)
                curr=curr->next;

            curr->next=curr->next->next;
        }
        
        return head;
    }
};