class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
             vector<int>fre(26,0);
            for(int j=i;j<n;j++)
                {
                    fre[s[j]-'a']++;
            int mn=INT_MAX;
            int mx=0;
            for(int f:fre)
                {
                   if(f>0){
                       mn=min(mn,f);
                       mx=max(mx,f);}
                }
               if(mn==mx)
               ans=max(ans,j-i+1);
                }
        }
        return ans;
    }
};