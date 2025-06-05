class Solution {
    ListNode* rotate(ListNode* head, ListNode* ptr) {
        ListNode* current = head;
        while (current != ptr->next) {
            swap(current->val, head->val);
            current = current->next;
        }
        return head;
    }

public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* current = head;
        ListNode* pre = head;

        while (current != NULL) {

            if (current->val < x) {
                pre = rotate(pre, current);
                pre = pre->next;
            }
            current = current->next;
        }
        return head;
    }
};
