class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>s;
        for(int c:nums)
        {
            s[c]++;
        }
        int k=0;
        for(auto &p:s){
        if(p.second>=2)
       k=p.first;
        }
        return k;
    }
};