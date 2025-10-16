// Author: Juyoung Moon
// https://leetcode.com/problems/reverse-linked-list/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = head->next;

        while (curr != nullptr) {
            curr->next = prev;
            
            prev = curr;
            curr = next;
            if (curr != nullptr) {
                next = curr->next;
            }
        }
        
        return prev;
    }
};  
