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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* current=head1;  
          ListNode* tracker=head1;
          int end=0;
        if(list1==nullptr){
            return list2;
        } 
        if(list2==nullptr){
            return list1;
        } 
        
        if(head1->val<=head2->val){
          current=head1;  
          tracker=head2;
        }
        else{
         current=head2;
         tracker=head1;
        }
        ListNode* tail=head1;
        while(current->next!=nullptr && end==0){
         ListNode* temp=current->next;
         if(temp->val<tracker->val){
           current=current->next;
         }
         else{
            tail=current->next;
            current->next=tracker;
            current=tracker;
            tracker=tail;
            if(current->next==nullptr){
                current->next=tracker;
                end=1;
            }
         }
        }
        if (current->next == nullptr && tracker != nullptr) {
    current->next = tracker;
}
        if(head1->val<=head2->val){
            return head1;
        } 
        else{
            return head2;
        }      
    }
};
