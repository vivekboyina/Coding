# Swap Nodes in Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

 

 **Example 1:** 

 **Input:**  head = [1,2,3,4]

 **Output:**  [2,1,4,3]

 **Explanation:** 

 **Example 2:** 

 **Input:**  head = []

 **Output:**  []

 **Example 3:** 

 **Input:**  head = [1]

 **Output:**  [1]

 **Example 4:** 

 **Input:**  head = [1,2,3]

 **Output:**  [2,1,3]

 

 **Constraints:** 

- The number of nodes in the list is in the range [0, 100].
- 0 <= Node.val <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11 MB (beats 87.27%)  
**Submitted:** 2026-08-07T12:17:58.700Z  

```cpp
class Solution {
public:
    ListNode* rec(ListNode* head)
    {
        if(head == nullptr) return nullptr;
        ListNode* nxt,*cur = head;
        if(head -> next != nullptr)
        {
            nxt = head -> next -> next;
            cur = head -> next;
            head -> next = nxt;
            cur -> next = head;
            head = cur;
        }
        if(head -> next != nullptr) head -> next -> next = rec(head -> next -> next);
        return head;
    }
    ListNode* swapPairs(ListNode* head) {
        head = rec(head);
        return head;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/swap-nodes-in-pairs/)