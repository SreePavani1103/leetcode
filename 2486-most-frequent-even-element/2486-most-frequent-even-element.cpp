class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        map<int,int,greater<int>>fr;
        for(int i=0;i<n;i++)
        {
          if(nums[i]%2==0)
          {
            fr[nums[i]]++;
          }
        }
         if(fr.empty())
     return -1;
    int maxf=0;
    int ans=INT_MAX;
    for(auto &[num,fre]:fr)
    {
        if(fre>maxf || (num<ans && maxf==fre))
        {
            maxf=fre;
            ans=num;
        }
    }
    return ans;
    }
};