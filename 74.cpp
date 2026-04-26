class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int left = 0, row = matrix.size(), col = matrix[0].size(), right = row * col - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2, mrow = mid / col, mcol = mid % col;
            if (matrix[mrow][mcol] == target) {
                return true;
            }
            else if (matrix[mrow][mcol] > target) right = mid - 1;
            else left = mid + 1;
        }
        return false;
    }
};
