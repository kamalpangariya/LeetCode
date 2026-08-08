/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode*p = head;
    int count = 0;
    while (p)
    {
        count++;
        p = p->next;
    }
    int a = (count)/2;
    for(int i = 1;i<a+1;i++)
    {
        head = head->next;
    }
    return head;
}