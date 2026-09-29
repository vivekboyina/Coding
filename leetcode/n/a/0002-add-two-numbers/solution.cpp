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