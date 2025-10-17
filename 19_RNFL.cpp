class Solution {
public:

    

    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        if (!head)
        {
            return head;
        }

        int size = 0;

        
        for (ListNode* i = head; i; i = i->next)
        {

            size++;
        }

       
        int target = size - n;

        int ct = 0;

        ListNode dummy(0);
        ListNode* tail = &dummy;

        for (ListNode* i = head; i; i = i->next)
        {
            ct++;
            if (ct == target+1)
            {
                continue;
            }
           
            tail->next = i;
            tail = tail->next;
           
        }

 tail->next = nullptr;


        return dummy.next;
    }
};