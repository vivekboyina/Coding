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