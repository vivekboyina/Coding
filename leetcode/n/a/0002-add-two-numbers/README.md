# Add Two Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given two  **non-empty**  linked lists representing two non-negative integers. The digits are stored in  **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

 **Example 1:** 

```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

```

 **Example 2:** 

```
Input: l1 = [0], l2 = [0]
Output: [0]

```

 **Example 3:** 

```
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]

```

 

 **Constraints:** 

- The number of nodes in each linked list is in the range [1, 100].
- 0 <= Node.val <= 9
- It is guaranteed that the list represents a number that does not have leading zeros.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 45.47%)  
**Memory:** 77.1 MB (beats 75.65%)  
**Submitted:** 2026-09-29T15:43:28.668Z  

```cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = nullptr,*an;
        int c = 0;
        while(l1 != nullptr || l2 != nullptr)
        {
            int k = 0;
            if(l1 == nullptr && l2 != nullptr)
            {
                k = k + l2 -> val + c;
                l2 = l2 -> next;
            }
            else if(l2 == nullptr && l1 != nullptr)
            {
                k = k + l1 -> val + c;
                l1 = l1 -> next;
            }
            else
            {
                k = k + l1 -> val + l2 -> val + c;
                l1 = l1 -> next;
                l2 = l2 -> next;
            }
            if(c == 1) c = 0;
            if(k > 9) c = 1;
            k = k % 10;
            if(ans == nullptr) 
            {
                ans = new ListNode(k);
                an = ans;
            }
            else
            {
                ans -> next = new ListNode(k);
                ans = ans -> next;
            }
        }
        if(c == 1) ans -> next = new ListNode(c);
        return an;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/add-two-numbers/)