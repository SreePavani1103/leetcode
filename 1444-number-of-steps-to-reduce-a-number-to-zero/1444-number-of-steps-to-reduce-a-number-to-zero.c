int numberOfSteps(int num) {
    long long n=num;
    int s=0;
    while(n>0)
    {
        if(n%2==0)
        {
            n=n/2;;
        }
        else
        n=n-1;
        s+=1;
    }
    return s;
}