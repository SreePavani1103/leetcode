class Solution {
public:
    vector<int> fun(vector<int>&a)
    {
        vector<int>v;
        int m=1e9+7;
               long long sum=0;
        for(int i=0;i<a.size();i++)
        {
              sum=(sum+a[i])%m;
              v.push_back(sum);
        }
        return v;
    }
    int valueAfterKSeconds(int n, int k) {
       vector<int>v(n,1);
       int mod=1e9+7;
        for(int i=0;i<k;i++)
        {
            v=fun(v);
        }
        return v[v.size()-1]%mod;
    }
};