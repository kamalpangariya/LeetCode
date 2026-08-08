# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next: # empty and single node linked lists
            return head

        newhead=head.next
        # since the new head after swapping will point to the second node
        prev=head
        curr=head.next
        while prev and curr:
            # temp1 and temp2 point to the next 2 nodes after prev and curr
            temp1=curr.next
            if temp1: # to avoid None.next which is invalid
                temp2=curr.next.next
            else:
                temp2=None
            curr.next=prev
            prev.next=temp2 if temp1 and temp2 else temp1
            prev=temp1
            curr=temp2
        return newhead        