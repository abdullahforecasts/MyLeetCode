class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next)
        {
            return head;
        }

        ListNode* middle = findMiddle(head);
        ListNode* fh = head;
        ListNode* sh = middle->next;
        middle->next = nullptr;

        ListNode* sfh = sortList(fh);
        ListNode* ssh = sortList(sh);

        return merge(sfh,ssh);
    }

    ListNode* merge(ListNode* list1, ListNode* list2) {
        
        ListNode dummy = ListNode(-1);
        ListNode* tail = &dummy;

        ListNode* l1 = list1; ListNode* l2 = list2;

        while (l1 and l2)
        {
            if (l1->val < l2->val)
            {
                tail->next = l1;
                l1 = l1->next;
                tail = tail->next;
            }
            else
            {
                tail->next = l2;
                l2 = l2->next;
                tail = tail->next;
            }


        }

        if (l1)
        {
            tail->next = l1;
        }
        else if (l2)
        {
            tail->next = l2;
        }


        return dummy.next;
    }

    ListNode* findMiddle(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }


        return slow;
    }

};
