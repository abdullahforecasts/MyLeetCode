class Solution {
public:
  ListNode* partition(ListNode* head, int x) {
    ListNode l1(0), l2(0);
    ListNode *t1 = &l1, *t2 = &l2;

    while (head) {
        if (head->val < x) {
            t1->next = head;
            t1 = t1->next;
        } else {
            t2->next = head;
            t2 = t2->next;
        }
        head = head->next;
    }

    t2->next = nullptr;
    t1->next = l2.next;

    return l1.next;
}

};