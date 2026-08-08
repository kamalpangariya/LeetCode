/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow = head,*fast = head;

    if (head == NULL || head->next == NULL)
        return NULL;
    
    while (fast != NULL && fast -> next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break;
    }
    if (fast == NULL || fast->next == NULL)
        return NULL;
    struct ListNode *p = head;
    while (p != slow) {
        p = p->next;
        slow = slow->next;
    }
    return slow;
}