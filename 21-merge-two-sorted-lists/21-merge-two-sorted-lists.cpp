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
    
    void insert(ListNode* list1, ListNode* tail){
        while(list1){
            ListNode* node=new ListNode(list1->val);
            tail->next=node;
            
            tail=tail->next;
            list1=list1->next;
        }
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tail=new ListNode();
        ListNode* merge=tail;
        
        while(list1 && list2){
            ListNode* node=new ListNode();
            
            if(list1->val <= list2->val){
                node->val=list1->val;
                list1=list1->next;
            }
            else{
                node->val=list2->val;
                list2=list2->next;
            }
            
            tail->next=node;
            tail=tail->next;
        }
        
        insert(list1, tail);
        insert(list2, tail);
        
        return merge->next;
    }
};