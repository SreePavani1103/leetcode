class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        map<char,int>str;
        for(int i=0;i<n;i++)
        {
            str[s[i]]++;
        }
       multimap<int,char,greater<int>>s2;
       for(auto &p:str)
       {
          s2.insert({p.second,p.first});
       }
     string res;
     for(auto &p:s2)
     {
        res.append(p.first,p.second);
     }
     return res;
    }
};