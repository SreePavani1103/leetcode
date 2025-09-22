class Solution {
public:
int fun(int x)
{
    int cnt = 0;
    string s;
    while(x!=0)
    {
        if(x%2 != 0) cnt++;
       x=x/2;
    }
   return cnt;
}
    vector<int> countBits(int n) {
     vector<int>b;
     for(int i=0;i<= n;i++)
     {
        b.push_back(fun(i));
     }
     return b;
    }
};