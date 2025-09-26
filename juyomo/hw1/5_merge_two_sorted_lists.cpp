// Author: Juyoung Moon
// https://leetcode.com/problems/merge-two-sorted-lists/

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

 class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* dummy = new ListNode();
            ListNode* curr = dummy;
    
            while (list1 != nullptr && list2 != nullptr) {
                if (list1->val < list2->val) {
                    curr->next = list1;
                    list1 = list1->next;
                } else {
                    curr->next = list2;
                    list2 = list2->next;
                }
                curr = curr->next;
            }
    
            if (list1 == nullptr) {
                curr->next = list2;
            }
            if (list2 == nullptr) {
                curr->next = list1;
            }
            
            curr = dummy->next;
            delete dummy;
            return curr;
        }
    };
    