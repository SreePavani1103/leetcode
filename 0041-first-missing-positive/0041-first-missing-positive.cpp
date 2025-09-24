class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int m=nums[0];
        int m2=nums[0];
        for(int i=0;i<n;i++)
        {
            m=max(m,nums[i]);
           m2=min(m2,nums[i]);
        }
        map<int,int>mpp;
        for(int c:nums)
        {
            if(c>0)
            mpp[c]++;
        }
        int k=1;
       while(true)
        {
            if(mpp[k]==0)
            return k;
            k++;
        }
    
    }
};