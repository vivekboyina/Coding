# Reorder List

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given the head of a singly linked-list. The list can be represented as:

```
L0 → L1 → … → Ln - 1 → Ln

```

 *Reorder the list to be on the following form:* 

```
L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …

```

You may not modify the values in the list's nodes. Only nodes themselves may be changed.

 

 **Example 1:** 

```
Input: head = [1,2,3,4]
Output: [1,4,2,3]

```

 **Example 2:** 

```
Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]

```

 

 **Constraints:** 

- The number of nodes in the list is in the range [1, 5 * 104].
- 1 <= Node.val <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 23.9 MB (beats 12.52%)  
**Submitted:** 2026-07-31T15:18:04.840Z  

```cpp
class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode*>st;
        ListNode* cc = head;
        while(cc != nullptr)
        {
            st.push(cc);
            cc = cc -> next;
        }
        cc = head;
        int n = (st.size() + 1)/2;
        ListNode* t;
        while(n > 0)
        {
            t = cc -> next;
            cc -> next = st.top();
            st.pop();
            cc = cc -> next;
            cc -> next = t;
            n-=1;
            if(n > 0) cc = cc -> next;
            else cc -> next = nullptr;
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reorder-list/)