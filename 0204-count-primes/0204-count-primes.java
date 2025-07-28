class Solution {
    public int countPrimes(int n) {
        if(n<3)
        return 0;
        boolean[] isprime = new boolean[n];
        for(int i=3;i<n;i+=2)
        {
            isprime[i]=true;
        }
        for(int i=3;i*i<n;i+=2)
        {
            if(isprime[i])
            {
                for(int j=i*i;j<n;j+=2*i)
                isprime[j]=false;
            }
        }
        int c=1;
        for(int i=3;i<n;i++)
        {
            if(isprime[i])
            c++;
        }
        return c;
   }
}