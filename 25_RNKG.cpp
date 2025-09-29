class Solution {
public:

    //10 20 30 40 50 60 70 80 
    // k =4 , 3,2

    void reverseNconnect(ListNode*& prv, ListNode*& start,ListNode*& end)
    {

        ListNode* prev = nullptr;
        ListNode* curr = start;
        ListNode* next = nullptr;

        ListNode* finalEnd = end->next;

        while (curr != finalEnd)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

        }
        prv->next = prev;
        start->next = finalEnd;


    }


    ListNode* reverseKGroup(ListNode* head, int k) {
       
        if (!head)
        {
            return head;
        }
        int size = 1;
        ListNode* curr = head;
        while (curr->next)
        {
            curr = curr->next;
            size++;
        }

        if (k>size)
        {
            return head;
        }


        ListNode* Cs = head;
        ListNode* Ce = head;
        ListNode dummy(0);
        ListNode* prv = &dummy;
        ListNode* newHead = head;
        

        for (int i = 0; i < k-1; i++)
        {
            newHead = newHead->next;
        }
      

        int ct = 1;
        while (Ce)
        {
            if (ct ==k)
            {
                
                reverseNconnect(prv, Cs,Ce );

                prv = Cs;
                Cs = Cs->next;
                Ce = Cs;
                    ct = 1;
            }
            else
            {
                Ce = Ce->next;
                ct++;
            }


           
        }


        return newHead;
    }

};