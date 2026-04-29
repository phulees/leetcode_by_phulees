class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long st = LLONG_MIN, nd = LLONG_MIN, rd = LLONG_MIN;
        for (int num : nums) {
            if (num == st || num == nd || num == rd) continue;
            else if (num > st) {
                rd = nd;
                nd = st;
                st = num;
            } else if (num > nd) {
                rd = nd;
                nd = num;
            } else if (num > rd) rd = num;
        }
        return (rd == LLONG_MIN) ? st : rd;
    }
};
