class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>a;
        map<int,int>s;
        for(int c:nums)
        {
            s[c]++;
        }
        for(auto &p:s)
        {
            if(p.second==1)
            {
                a.push_back(p.first);
            }
        }
        return a;
    }
};