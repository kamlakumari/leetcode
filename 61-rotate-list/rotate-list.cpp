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
    ListNode* rotateRight(ListNode* head, int k) {
       if (!head || !head->next || k == 0) return head;

        // Step 1: Find the length of the list
        int len = 1;
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
            len++;
        }

        // Step 2: Connect tail to head to make it circular
        temp->next = head;

        // Step 3: Find the new tail: len - k % len - 1 th node
        // and the new head: len - k % len th node
        k = k % len;
        int stepsToNewHead = len - k;
        temp = head;
        for (int i = 0; i < stepsToNewHead - 1; i++) {
            temp = temp->next;
        }

        // Step 4: Break the loop and return new head
        ListNode* newHead = temp->next;
        temp->next = nullptr;

        return newHead;
    }
};