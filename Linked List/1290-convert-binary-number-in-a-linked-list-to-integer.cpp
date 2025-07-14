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
    int getDecimalValue(ListNode* head) {
        vector<int> ans;
        while (head != NULL) {
            ans.push_back(head->val);
            head = head->next;
        }
        int n = ans.size();
        int x = 0, sol = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (ans[i])
                sol += pow(2, x);
            x++;
        }
        return sol;
    }
};
