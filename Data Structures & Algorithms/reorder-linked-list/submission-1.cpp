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
    void reorderList(ListNode* head) {
        if(head->next==nullptr){
            return;
        }
        int size=1;

        ListNode* current=head;
        while (current->next!=nullptr){
        current=current->next;
        size+=1;
        }
        cout<<size;
        int middle_value=0;
        if(size%2==0){
          middle_value=size/2;
        }
        else{
            middle_value=(size/2)+1;
        }
        current=head;
        
        for (int i=1;i<middle_value;i++){
            current=current->next;   
        }
        ListNode* rent = current->next; 
        current->next = nullptr;  
        cout<<current->val;
        ListNode* previous=nullptr;
        ListNode* next1=nullptr;
        current=rent;
        while(current!=nullptr ){
        next1=current->next;
        current->next=previous;
        previous=current;
        current=next1;
        } 
        cout<<previous->val;
        current=head;
       while (previous!=nullptr){
            ListNode* temp=current->next;
            current->next=previous;
            ListNode* temp2=previous->next;
            previous->next=temp;
            previous=temp2;
            current=temp;
        }
    }
};
