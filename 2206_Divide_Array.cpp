class Solution {
public:
 bool divideArray(vector<int>& nums) {
    if (nums.size() % 2 != 0) return false;

    for (int i = 0; i < nums.size() - 1; i++) {  
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                swap(nums[j], nums[i + 1]);
                break;  
            }
        }
    }

    for (int i = 0; i < nums.size(); i += 2) {
        if (nums[i] != nums[i + 1]) {
            return false;
        }
    }

    return true;
}



};