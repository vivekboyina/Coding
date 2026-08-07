# Reverse Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given the `head` of a singly linked list, reverse the list, and return  *the reversed list*.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

```

 **Example 2:** 

```
Input: head = [1,2]
Output: [2,1]

```

 **Example 3:** 

```
Input: head = []
Output: []

```

 

 **Constraints:** 

- The number of nodes in the list is the range [0, 5000].
- -5000 <= Node.val <= 5000

 

 **Follow up:**  A linked list can be reversed either iteratively or recursively. Could you implement both?

## Solution

**Language:** C++  
**Runtime:** 19 ms (beats 0.71%)  
**Memory:** 13.9 MB (beats 8.77%)  
**Submitted:** 2026-08-07T12:33:42.002Z  

```cpp
class Solution {
public:
    ListNode* rec(ListNode* head)
    {
        if(head == nullptr) return head;
        ListNode* tmp = new ListNode(head -> val);
        ListNode* ans = rec(head -> next);
        if(ans == nullptr) ans = tmp;
        else
        {
            ListNode* cur = ans;
            while(cur -> next != nullptr) cur = cur -> next;
            cur -> next = tmp;
        }
        return ans;
    }
    ListNode* reverseList(ListNode* head) {
        head = rec(head);
        return head;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-linked-list/)