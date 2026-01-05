class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int mip=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            mip=min(mip,prices[i]);
            maxp=max(maxp,prices[i]-mip);
        }
        return maxp;
    }
};