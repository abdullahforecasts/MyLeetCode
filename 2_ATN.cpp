class Solution {
public:

    ListNode* reverse(ListNode* head)
    {

        ListNode* curr = head;
        ListNode* prv = nullptr;
        ListNode* next = nullptr;

        while (curr)
        {

            next = curr->next;
            curr->next = prv;
            prv = curr;
            curr = next; // curr = curr->next;

        }

        return prv;

    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        

        // l1 = reverse(l1);
        // l2 = reverse(l2);

        ListNode dummy = ListNode();
        ListNode* tail = &dummy;


        int sum = 0;
        int car = 0;


        while (l1 || l2 || car)
        {

            int x = (l1) ? l1->val : 0;
            int y = (l2) ? l2->val : 0;
          
            sum = x + y + car;
            car = sum / 10;
            sum = sum % 10;
           

            tail->next = new ListNode(sum);
            tail = tail->next;


            if (l1)
            {
                l1 = l1->next;
            }
            if (l2)
            {
                l2 = l2->next;
            }



        }


       
       // return reverse(dummy.next);
        return dummy.next;
    }
};
