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
private:
    int countnode(ListNode* head) {
        ListNode* p = head;
        int count = 0;
        while (p) {
            p = p->next;
            count++;
        }
        return count;
    }

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c = countnode(head);
        int x = c - n;
        if (c == 1)
            return NULL;
        ListNode* a = head;
        ListNode* b = head->next;
        if (x == 0)
            return b;
        for (int i = 1; i < x; i++) {
            a = a->next;
            b = b->next;
        }
        a->next = b->next;
        b->next = NULL;
        cout << b->val;

        return head;
    }
};
