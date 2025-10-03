class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
       vector<int>v(nums.size());
       vector<bool>f;
      v[0]=nums[0]%5;
       for(int i=1;i<nums.size();i++)
       {
           v[i]=(2*v[i-1]+nums[i])%5; 
       } 
       for(int i=0;i<v.size();i++)
       {
           f.push_back(v[i]==0);
       }
       return f;
    }
};