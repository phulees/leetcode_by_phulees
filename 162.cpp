class Solution {
private:
    bool peakVCl(const vector<int>& nums, const int& index) {
        int n = nums.size();
        if (n == 1) return true;
        if (index == 0) return nums[index] > nums[index + 1];
        if (index == n - 1) return nums[index] > nums[index - 1];
        return nums[index] > nums[index + 1] && nums[index] > nums[index - 1];
    }
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (peakVCl(nums, mid)) return mid;
            else if (nums[mid + 1] > nums[mid]) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};
