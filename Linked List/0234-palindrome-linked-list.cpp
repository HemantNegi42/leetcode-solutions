class Solution {
     ListNode* reverse(ListNode* head) {
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
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* p=reverse(slow);
        
        while(p!=NULL){
            if(p->val!=head->val)
            return false;
            head=head->next;
            p=p->next;
        }
        
        return true;
    }
};
