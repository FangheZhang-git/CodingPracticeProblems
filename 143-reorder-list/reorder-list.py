# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: ListNode | None) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        #find middle
        slow, fast = head, head.next
        while fast and fast.next:
            slow=slow.next
            fast = fast.next.next
        #reverse second half
        curr = slow.next
        prev=slow.next=None
        while curr:
            tmp=curr.next
            curr.next=prev
            prev=curr
            curr=tmp
        #merge two halfs
        first,curr=head,prev
        while curr:
            tmp1,tmp2=first.next,curr.next
            first.next=curr
            curr.next=tmp1
            first,curr=tmp1,tmp2
        