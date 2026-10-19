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
    bool hasCycle(ListNode* head) {
        if(head==nullptr){
            return false;
        }
        ListNode* current=head;
        while(current->next!=nullptr){
            ListNode* temp=current->next;
            if(temp->val=='A'){
                return true;
            }
            current->val='A';
            current=current->next;
        }
        return false;
    }
};
