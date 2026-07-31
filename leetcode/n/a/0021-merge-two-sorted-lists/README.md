# Merge Two Sorted Lists

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one  **sorted**  list. The list should be made by splicing together the nodes of the first two lists.

Return  *the head of the merged linked list*.

 

 **Example 1:** 

```
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

```

 **Example 2:** 

```
Input: list1 = [], list2 = []
Output: []

```

 **Example 3:** 

```
Input: list1 = [], list2 = [0]
Output: [0]

```

 

 **Constraints:** 

- The number of nodes in both lists is in the range [0, 50].
- -100 <= Node.val <= 100
- Both list1 and list2 are sorted in non-decreasing order.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 19.6 MB (beats 28.40%)  
**Submitted:** 2026-07-31T12:26:23.944Z  

```cpp
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        ListNode* ans = new ListNode(0);
        ListNode* ori = ans;
        ListNode* tmp;
        while(l1 != nullptr && l2 != nullptr)
        {
            if(l1 -> val < l2 -> val)
            {
                tmp = new ListNode(l1 -> val);
                l1 = l1 -> next;
            }
            else
            {
                tmp = new ListNode(l2 -> val);
                l2 = l2 -> next;
            }
            ans -> next = tmp;
            ans = ans -> next;
        }
        if(l1 != nullptr) ans -> next = l1;
        else ans -> next = l2;
        return ori -> next;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/merge-two-sorted-lists/)