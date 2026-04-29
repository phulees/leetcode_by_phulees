class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<pair<int, vector<int>>> d(n);
        for (int i = 0; i < n; i++) {
            d[i].first = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            d[i].second = points[i];
        }
        
        sort(d.begin(), d.end());
        d.resize(k);
        vector<vector<int>> ans(k);

        for (int i = 0; i < k; i++) ans[i] = d[i].second;
        return ans;
    }
};
