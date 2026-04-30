class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), j = 0;
        vector<int> temp(n, 0);
        temp[j++] = nums[0];
        for (int i = 0; i < n; i++) {
            if (nums[i] == temp[j - 1]) {
                continue;
            } else temp[j++] = nums[i];
        }
        nums = temp;
        return j;
    }
};
