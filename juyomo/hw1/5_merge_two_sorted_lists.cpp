// Author: Juyoung Moon
// https://leetcode.com/problems/merge-two-sorted-lists/

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

// Iterative & recursive solution 둘 다 있습니다! 참고해주세요 :)

class Solution {
public:
    ListNode* mergeIteratively(ListNode* list1, ListNode* list2) {
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

    ListNode* mergeRecursively(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        } else if (list2 == nullptr) {
            return list1;
        } else if (list1->val < list2->val) {
            list1->next = mergeRecursively(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeRecursively(list1, list2->next);
            return list2;
        }
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // return mergeIteratively(list1, list2);
        return mergeRecursively(list1, list2);
    }
};
