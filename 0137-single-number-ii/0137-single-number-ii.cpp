class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>s;
        for(int a:nums)
        {
          s[a]++;
        }
        int l=0;
        for(auto &p:s)
        {
            if(p.second==1)
            {
                l=p.first;
            }
        }
        return l;
    }
};