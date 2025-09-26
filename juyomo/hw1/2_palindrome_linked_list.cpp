// Author: Juyoung Moon
// https://leetcode.com/problems/palindrome-linked-list/

// HOCO Mentoring HW 1
// https://github.com/juyomo/hoco-mentoring

// I was lazy and I only have O(n) space complexity solution here.. :)

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> nodes;
        while (head != nullptr) {
            nodes.push_back(head->val);
            head = head->next;
        }

        int i = 0;
        int j = nodes.size() - 1;

        while (i < j) {
            if (nodes[i] != nodes[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
