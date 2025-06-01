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
    ListNode* swapPairs(ListNode* head) {
         if (!head || !head->next) return head;

        // Initialize pointers
        ListNode* newHead = head->next;
        ListNode* prev = nullptr;

        while (head && head->next) {
            ListNode* first = head;
            ListNode* second = head->next;

            // Swapping
            first->next = second->next;
            second->next = first;

            // Link previous pair with current
            if (prev) {
                prev->next = second;
            }

            // Move pointers ahead
            prev = first;
            head = first->next;
        }

        return newHead;
    }
};