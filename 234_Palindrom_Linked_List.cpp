class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        vector<int>helper;
        ListNode* temp = head;
        while (temp->next != nullptr)
        {
            helper.push_back(temp->val);
            temp = temp->next;
        }

      
        helper.push_back(temp->val);
        int left = 0, right = helper.size() - 1;
        while (left<right)
        {
            int lv = helper[left++];
            int rv = helper[right--];
            if (lv != rv)
            {
                return false;
            }

        }



        return true;
    }
};