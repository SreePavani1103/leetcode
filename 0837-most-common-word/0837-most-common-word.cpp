class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int>m;
     string l;
       for(int i=0;i<paragraph.size();i++)
       {
        if(paragraph[i]=='!' || paragraph[i]=='.' || paragraph[i]=='?' || paragraph[i]==',' || paragraph[i]==';' ||paragraph[i]==39)
        {
            l+=' ';
        }
        else if(paragraph[i]>='A' && paragraph[i]<='Z')
       l+=paragraph[i]+32;
       else
       l+=paragraph[i];
       }
       stringstream s(l);
       string word;
       while(s>>word)
       {
           m[word]++;
       }
       multimap<int,string,greater<int>>m2;
       for(auto &p:m)
       {
        m2.insert({p.second,p.first});
       }
       auto k=m2.begin();
       string s2=k->second;
         for(auto j=m2.begin();j!=m2.end();++j){
            bool isbanned=false;
        for(int i=0;i<banned.size();i++){
            if(j->second==banned[i]){
              isbanned=true;
            break;
            }
          }
          if(!isbanned)
          return j->second;
        }
        return s2;
    }
};