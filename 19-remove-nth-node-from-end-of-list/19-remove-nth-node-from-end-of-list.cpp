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
        
        ListNode* temp=head;
        int count{0};

        while(temp!=nullptr){
            ++count;
            temp=temp->next;
        }

        //now n from first node
        n=count-n;
        
        if(n){
            temp=head;
            while(--n)
                temp=temp->next;
            temp->next=temp->next->next;
        }
        
        else
            head=head->next;
           
        return head;
    }
};