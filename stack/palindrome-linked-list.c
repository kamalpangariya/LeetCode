bool isPalindrome(struct ListNode* head) {
    if (!head || !head->next) return true;  // A single node or empty list is always a palindrome

    // Step 1: Find the middle of the linked list
    struct ListNode *slow = head, *fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse the second half of the list
    struct ListNode *prev = NULL, *curr = slow->next, *next = NULL;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    slow->next = prev;  // `prev` now points to the head of the reversed second half

    // Step 3: Compare the two halves
    struct ListNode *firstHalf = head;
    struct ListNode *secondHalf = prev;  // This is the head of the reversed second half
    bool isPalindrome = true;
    while (secondHalf) {
        if (firstHalf->val != secondHalf->val) {
            isPalindrome = false;
            break;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    // Step 4: Restore the original list (optional)
    curr = prev;
    prev = NULL;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    slow->next = prev;  // Restore the list to its original form

    return isPalindrome;
}