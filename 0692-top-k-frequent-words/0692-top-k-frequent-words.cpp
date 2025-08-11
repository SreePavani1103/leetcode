class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>s;
        for(int i=0;i<words.size();i++)
        {
            s[words[i]]++;
        }
        multimap<int,string,greater<int>>s2;
        for(auto &p:s)
        {
            s2.insert({p.second,p.first});
        }
      vector<string>s1;
        for(auto &p:s2)
        {
             s1.push_back(p.second);
        }
       vector<string>m;
       for(int i=0;i<k;i++)
       {
            m.push_back(s1[i]);
       }
       return m;
    }
};