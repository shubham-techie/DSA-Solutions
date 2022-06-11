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
    bool isPalindrome(ListNode* head) {
        stack<int> stk{};
        ListNode* slow=head, *fast=head;
        
        while(fast && fast->next){
            fast=fast->next->next;
            
            stk.push(slow->val);
            slow=slow->next;
        }
        
        //if even nodes
        if(fast){
            slow=slow->next;
        }
        
        while(!stk.empty()){
            if(stk.top()!=slow->val)
                return false;
            stk.pop();
            slow=slow->next;
        }
        return true;
    }
};