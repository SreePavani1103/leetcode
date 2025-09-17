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
          int next = id + 1;
        while (next < n && nums[next] == nums[id])
         next++;
       subseq(next, nums, n, ds, res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ds;
        vector<vector<int>> res;
        subseq(0, nums, n, ds, res);
        return res;
    }
};