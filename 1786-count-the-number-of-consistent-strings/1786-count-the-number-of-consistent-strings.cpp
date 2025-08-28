class Solution {
public:
     int count(string s,string s2,map<char,int>l)
     {
        map<char,int>m;
        for(char c:s2)
        {
            m[c]=0;
        }
        for(char c:s)
        {
            m[c]++;
        }
        bool hasfr=false;
        for(auto &p:m)
        {
            if(p.second>0)
            {
                hasfr=true;
                break;
            }
        }
       if(m.size()==l.size() && hasfr==true )
       return 1;
       else
       return 0;
     }
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>s;
        for(int i=0;i<allowed.size();i++)
        {
            s[allowed[i]]++;
        }
        int c=0;
        for(int i=0;i<words.size();i++)
        {
           if(count(words[i],allowed,s)==1){
           c++;
           }
        }
        return c;
    }
};