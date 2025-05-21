int findClosest(int x, int y, int z) {
    int k=abs(z-x);
    int l=abs(z-y);
    if(k<l)
    return 1;
    else if(k>l)
    return 2;
    else
    return 0;
}