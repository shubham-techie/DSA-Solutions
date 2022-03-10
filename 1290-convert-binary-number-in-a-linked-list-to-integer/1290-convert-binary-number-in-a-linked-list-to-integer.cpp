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
    int getDecimalValue(ListNode* head) {
        
        int dec{};
        
        vector<int> v{};
        
        while(head!=nullptr){
            v.emplace_back(head->val);
            head=head->next;
        }
        
        for(int i=0,j=v.size()-1;i<v.size();++i,--j){
            if(v[j]!=0)
                dec+=v[j]*pow(2,i);
        }
        return dec;
    }
};