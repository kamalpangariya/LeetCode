/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head,*slow = head;
    int pos;
    printf("enter pos");
    scanf("%d",&pos);
    if (pos == -1)
        return 0;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) {
            break;
        }
    }
    if (fast==NULL||fast->next==NULL)
        return 0;
    else
        return 1;
    
}