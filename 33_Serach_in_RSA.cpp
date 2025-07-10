class Solution {
public:
 
int search(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

       
        if (nums[mid] == target) return mid;
        if (nums[start] == target) return start;
        if (nums[end] == target) return end;

       
        bool leftSorted = nums[start] < nums[mid];
        bool rightSorted = nums[mid] < nums[end];

        if (leftSorted && nums[start] <= target && target < nums[mid]) 
            end = mid - 1;
        else if (rightSorted && nums[mid] < target && target <= nums[end]) 
            start = mid + 1;
        else if (leftSorted) 
            start = mid + 1;
        else 
            end = mid - 1;
    }

    return -1; 
}

};