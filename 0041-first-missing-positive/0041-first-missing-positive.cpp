class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size(); 
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