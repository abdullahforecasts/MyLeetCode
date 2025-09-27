class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() <= 2) return true;

        for (size_t i = 2; i < coordinates.size(); i++) {
            int x1 = coordinates[0][0], y1 = coordinates[0][1];
            int x2 = coordinates[1][0], y2 = coordinates[1][1];
            int x3 = coordinates[i][0], y3 = coordinates[i][1];

            int area2 = x1 * (y2 - y3) +
                        x2 * (y3 - y1) +
                        x3 * (y1 - y2);

            if (area2 != 0) return false;
        }
        return true;
    }
};
