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