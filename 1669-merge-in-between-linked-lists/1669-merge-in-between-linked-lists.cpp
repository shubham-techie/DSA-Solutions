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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *snode=list1, *enode=list1;
        
        for(int i=a-1;i>0;--i)
            snode=snode->next;
        
        enode=snode;
        for(int i=b-a+1;i>0;--i)
            enode=enode->next;

        snode->next=list2;
        
        snode=list2;
        while(snode->next)
            snode=snode->next;
        
        snode->next=enode->next;
        
        return list1;
    }
};