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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = nullptr;
        if(!head){ 
            return temp;
        }

        ListNode* newHead = head;
        if(head -> next){
            newHead = reverseList(head->next);
            head -> next ->next = head;
        }
        head -> next = temp;
        return newHead;
        
    }
};
