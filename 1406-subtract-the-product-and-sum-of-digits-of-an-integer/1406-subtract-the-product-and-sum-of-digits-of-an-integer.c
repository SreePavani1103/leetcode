int subtractProductAndSum(int n) {
    int rev=0,p=1,sum=0;
    while(n>0)
    {
        rev=n%10;
        sum=sum+rev;
        p=p*rev;
        n=n/10;
    }
    return p-sum;
}