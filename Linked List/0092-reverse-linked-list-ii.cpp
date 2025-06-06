class Solution {
ListNode* rev(ListNode* head,int s,int e){
    ListNode* p=head;
    ListNode* q=head;
    for(int i=1;i<s;i++){
        p=p->next;
    }
    for(int i=1;i<e;i++){
        q=q->next;
    }
    swap(p->val,q->val);
    return head;
}
    
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
        return head;
        while(left<right){
           head= rev(head,left,right);
            left++;
            right--;
        }
        return head;
    }
};
