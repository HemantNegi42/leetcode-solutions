class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)
        return head;
        ListNode* pre=NULL;
        ListNode* forward=NULL;
        ListNode* current=head;
        while(current!=NULL){
            forward=current->next;
            current->next=pre;
            pre=current;
            current=forward;
        }
        return pre;
    }
};
