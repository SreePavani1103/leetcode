class Solution {
       string binary(int n)
       {
            string s="";
            if(n==0)
            s+='0';
            else{
            while(n!=0)
            {
                s+=char((n%2)+'0');
                n=n/2;
            }
           reverse(s.begin(),s.end());
            }
          return s;
       }
    int Set(string s)
    {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            c++;
        }
        return c;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
     multimap<pair<int,int>,int>m2;
     for(int n:arr)
     {
        m2.insert({{Set(binary(n)),n},n});
     }
      vector<int>a;
      for(auto &p:m2)
      {
        a.push_back(p.second);
      }
     return a;
     
    }
};