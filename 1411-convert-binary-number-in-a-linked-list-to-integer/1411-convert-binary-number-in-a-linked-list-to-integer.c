/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode*temp=head;
    int c=0,sum=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    while(c--)
    {
        int k=head->val*pow(2,c);
        sum=sum+k;
        head=head->next;
    }
    return sum;
}