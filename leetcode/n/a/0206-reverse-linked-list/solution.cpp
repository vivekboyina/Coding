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