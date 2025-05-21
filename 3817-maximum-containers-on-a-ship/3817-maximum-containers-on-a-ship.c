int maxContainers(int n, int w, int maxWeight) {
    int l=maxWeight;
    int k=n*n;
    if(k*w<=l)
    {
        return k;
    }
    else
    {
        return l/w;
    }
}