class Solution {
public:
    
    int valueAfterKSeconds(int n, int k) {
       vector<int>v(n,1);
       int mod=1e9+7;
       for(int i=1;i<=k;i++)
       {
           for(int j=1;j<n;j++)
           {
               v[j]=(v[j-1]%mod+v[j]%mod)%mod;
           }
       }
       return v[n-1]%mod;
    }
};