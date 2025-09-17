class Solution {
public:
    void subseq(int id, vector<int>& nums, int n, vector<int>& ds, vector<vector<int>>& res) {
        if (id >= n) {
            res.push_back(ds);
            return;
        }
        // pick
        ds.push_back(nums[id]);
        subseq(id + 1, nums, n, ds, res);
        ds.pop_back();
        // nonpick
        subseq(id + 1, nums, n, ds, res);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> ds;
        vector<vector<int>> res;
        subseq(0, nums, n, ds, res);
        return res;
    }
};