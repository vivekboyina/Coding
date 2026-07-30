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