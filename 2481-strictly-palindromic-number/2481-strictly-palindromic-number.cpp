  int strict(int n,int base)
  {
    string s1;
    while(n!=0){
    int k=n%base;
    if(k==0)
    s1+='0';
    else
    s1+=to_string(k);
        n=n/base;
    }
    int flag=0;
     string s2=s1;
    reverse(s2.begin(),s2.end());
    if(s1==s2)
    flag=1;
    if(flag==1)
    return true;
    else
    return false;
    }
  
class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int base=n-2;
        while(base!=n-3 || base!=0)
        {
            if(strict(n,base)==0)
            return false;
            else
            base=base-1;
        }
        return true;
    }
};