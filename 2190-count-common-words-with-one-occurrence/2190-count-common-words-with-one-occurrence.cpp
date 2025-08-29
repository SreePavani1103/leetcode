class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>m1;
        map<string,int>m2;
        for(string s:words1)
        {
            m1[s]++;
        }
        for(string s:words2)
        {
            m2[s]++;
        }
        vector<string>v;
        int c=0;
        for(auto &p:m1)
        {
            if(p.second==1 && m2[p.first]==1)
            {
               c++;
            }
        }
       
        return c;
    }
};