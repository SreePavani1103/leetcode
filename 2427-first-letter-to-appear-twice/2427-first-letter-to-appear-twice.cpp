class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int,greater<int>>m;
        char c;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            if( m[s[i]]==2)
           {
                c= s[i];
                break;
           }
        }
        return c;
    }
};