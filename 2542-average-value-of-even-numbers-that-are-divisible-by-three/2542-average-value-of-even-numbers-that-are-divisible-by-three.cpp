class Solution {
public:
    int averageValue(vector<int>& nums) {
        int k=0;
       int sum=0;
       for(int i=0;i<nums.size();i++)
       {
          if(nums[i]%2==0)
          {
            if(nums[i]%3==0)
            {
                sum+=nums[i];
                k++;
            }
          }
       }
       if(k==0)
       return 0;
       else
       return sum/k; 
    }
};