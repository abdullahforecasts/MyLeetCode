class Solution {
public:

    ListNode* deleteDuplicates(ListNode* head) {
     

     ListNode dummy(0);
     ListNode* tail = &dummy;

    
     for (ListNode* i = head; i;)
     {
         if (i->next and i->next->val == i->val)
         {
             int v = i->val;
             
             while (i and i->val ==v)
             {

                 ListNode* temp = i;
                 i = i->next;
                 delete temp;

             }
             
         }
         else
         {
             tail->next = i;
             tail = tail->next;
             i = i->next;
         }
        
     }

     tail->next = nullptr;

     return dummy.next;
 }
};