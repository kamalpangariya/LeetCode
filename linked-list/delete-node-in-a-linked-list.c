/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    //Using two pointer
            struct ListNode *q,*p = node;
            q = p->next ;
            p->val = q->val;
            p->next = q->next;
    
   
    //Using one pointer 
        // struct ListNode*p=node;
        // p->val=p->next->val;
        // p->next=p->next->next;
    
}