int findLucky(int* arr, int arrSize) {
    int dc[501]={0};
    int n=arrSize;
    for(int i=0;i<n;i++)
    {
        dc[arr[i]]++;
    }
    for(int i=500;i>0;i--)
    {
        if(dc[i]==i)
        {
            return i;
        }
    }
    return -1;
}