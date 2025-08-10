class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        bool f=false;
        int ans=1000000;
        for(int i=l;i<=r;i++)
        {
            if(i>n)
            break;
            int s=0;
            for(int j=0;j<i;j++)
            {
                s+=nums[j];
            }
            if(s>0)
             {
                ans=min(ans,s);
                f=true;
             }
             for(int j=i;j<n;j++)
             {
                s+=nums[j]-nums[j-i];
                if(s>0)
                {
                    ans=min(ans,s);
                    f=true;
                }
             }
        }
        if(f)
        return ans;
        else
        return -1;
    }
};