class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(i%2!=0)
            {
                v.insert(v.end(),nums[i-1],nums[i]);
            }
        }
        return v;
    }
};