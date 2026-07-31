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
