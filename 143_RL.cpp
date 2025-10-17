class Solution {
public:

    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* nxt = nullptr;
        ListNode* prv = nullptr;

        while (curr)
        {
            nxt = curr->next;
            curr->next = prv;
            prv = curr;
            curr = nxt;
        }
        return prv;
    }

    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        ListNode* mid = findMiddle(head);
        ListNode* l2 = reverse(mid->next);
        mid->next = nullptr;

        ListNode d(0);
        ListNode* tail = &d;
        ListNode* l1 = head;

        while (l1 && l2)
        {
            tail->next = l1; l1 = l1->next; tail = tail->next;
            tail->next = l2; l2 = l2->next; tail = tail->next;
        }

        if (l1) tail->next = l1;
        else tail->next = nullptr;

        head = d.next;
    }
};
