class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0, end = matrix.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (matrix[mid][0] == target) {
                return true;
            }
            if (matrix[mid][0] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // If end is negative, use start instead
        int row = (end >= 0) ? end : start;
        if (row >= matrix.size()) return false; // Out of bounds check

        int s = 0, e = matrix[0].size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;

            if (matrix[row][m] == target) {
                return true;
            }
            if (matrix[row][m] < target) {
                s = m + 1;
            } else {
                e = m - 1;
            }
        }

        return false;
    }
};