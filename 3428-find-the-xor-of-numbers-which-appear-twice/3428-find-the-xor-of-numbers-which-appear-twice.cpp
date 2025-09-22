class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       vector<int>a;
       map<int,int>s;
       for(int c:nums)
       {
        s[c]++;
       } 
       int k=0;
       for(auto &p:s)
       {
        if(p.second>=2)
        {
            k^=p.first;
        }
       }
       return k;
    }
};