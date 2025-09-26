class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>v;
        vector<string>ori=strs;
        for(int i=0;i<n;i++)
        {
           sort(strs[i].begin(),strs[i].end());
        }
       vector<bool>vis(n,false);
       vector<string>g;
        for(int i=0;i<n;i++)
        {
          if(vis[i])
          continue;
          vector<string>g;
          g.push_back(ori[i]);
          vis[i]=true;
          for(int j=i+1;j<n;j++)
          {
                if(!vis[j] && strs[i]==strs[j])
                {
                    g.push_back(ori[j]);
                    vis[j]=true;
                }
          }
          v.push_back(g);
        }
        return v;
    }
};