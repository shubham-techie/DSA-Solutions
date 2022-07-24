/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode fl=new ListNode();
        ListNode tmp=fl;
        
        while(l1!=null && l2!=null){
            if(l1.val<l2.val){
                tmp.next=l1;
                l1=l1.next;
            }
            else{
                tmp.next=l2;
                l2=l2.next;
            }
            tmp=tmp.next;
        }
       
        while(l1!=null){
            tmp.next=l1;
            tmp=tmp.next;
            l1=l1.next;
        }
        
        while(l2!=null){
            tmp.next=l2;
            tmp=tmp.next;
            l2=l2.next;
        }
        
        return fl.next;
    }
}