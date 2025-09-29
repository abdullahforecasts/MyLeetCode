/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     ListNode* rotateRight(ListNode* head, int k) {
    if (!head or !head->next or k <1)
    {
        return head;
    }

    ListNode* start = head;
    ListNode* end = head;
    int size = 1;

    while (end->next)
    {
        end = end->next;
        size++;
    }

    // 1-2-3-4-5-1
    end->next = start;
    


    k = k%size;
    for (int i = 0; i < size-k-1; i++)
    {

        start = start->next;
    }

    cout << "start: " << start->val << endl;

    ListNode* newH = start->next;

    start->next = nullptr;



    return newH;
}

};