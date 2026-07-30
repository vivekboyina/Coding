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
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.5 MB (beats 16.83%)  
**Submitted:** 2026-07-30T14:52:32.687Z  

```cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* next;
        ListNode* ans = nullptr;
        while(curr != nullptr)
        {
            next = curr -> next;
            curr -> next = ans;
            ans = curr;
            curr = next;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-linked-list/)