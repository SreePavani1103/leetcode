class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        vector<int>a;
        for(auto &ip:freq)
        {
            if(ip.second>n/3)
            a.push_back(ip.first);
        }
        return a;
    }
};