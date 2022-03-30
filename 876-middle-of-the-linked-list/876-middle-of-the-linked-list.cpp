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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* tmp=head;
        int n{};
        
        while(tmp!=nullptr){
            tmp=tmp->next;
            ++n;
        }
        
        n>>=1;
        
        while(n--)
            head=head->next;
        
        return head;
    }
};