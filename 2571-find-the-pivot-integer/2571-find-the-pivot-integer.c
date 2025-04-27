int pivotInteger(int n) {
    long long v=(n*(n+1))/2;
    int x=(int )sqrt(v);
    if((long long)x*x==v)
    {
        return x;
    }
    else
    return -1;
}