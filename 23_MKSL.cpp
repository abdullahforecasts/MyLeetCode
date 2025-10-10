class Solution {
public:

    ListNode* merge(ListNode* list1, ListNode* list2)
    {
        ListNode dummy = ListNode();
        ListNode* tail = &dummy;

        ListNode* l1 = list1;
        ListNode* l2 = list2;


        while (l1 and l2)
        {

            if (l1 and l2)
            {
                if (l1->val<l2->val)
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

        }

        if (l1)
        {
            tail->next = l1;
        }
        else if(l2)
        {
            tail->next = l2;
        }


        return dummy.next;

    }


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if (lists.empty())
        {
            return nullptr;
        }

        if (lists.size()==1 )
        {
            return lists[0];
        }


        ListNode* allmerged = nullptr; 
        for (int i = 0; i < lists.size(); i++)
        {
            allmerged = merge(lists[i], allmerged);

        }




        return allmerged;
    }
};