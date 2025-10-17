class Solution {
public:


    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return nullptr;
        ListNode dummy(0);
        ListNode* tail = & dummy;


        tail->next = head;
        tail = tail->next;
        for (ListNode* i = head->next; i;i = i->next)
        {
            if (tail->val != i->val)
            {
                tail->next = i;
                tail = tail->next;
            }
            
        }

        tail->next = nullptr;

        return dummy.next;
    }
};
