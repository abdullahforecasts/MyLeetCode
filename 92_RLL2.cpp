class Solution {
public:

    ListNode* reverse(ListNode* head, ListNode* en)
    {
        ListNode* curr = head;
        ListNode* prv = nullptr;
        ListNode* next = nullptr;

        while (curr)
        {
            next = curr->next;
            curr->next = prv;
            prv = curr;
            curr = next;
        }

        curr = prv;
        while (curr->next)
            curr = curr->next;
      
        curr->next = en;
        return prv;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right)
    {
        if (!head || left == right)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;

        for (int i = 1; i < left; i++)
            curr = curr->next;

        ListNode* start = curr->next;
        ListNode* end = start;

        for (int i = left; i < right; i++)
            end = end->next;

        ListNode* en = end->next;
        end->next = nullptr;
        curr->next = reverse(start, en);

        return dummy->next;
    }
};
