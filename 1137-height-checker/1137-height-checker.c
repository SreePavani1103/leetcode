void bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                 int temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
            }
        }
    }
}
int heightChecker(int* heights, int heightsSize) {
    int ex[heightsSize];
    for(int i=0;i<heightsSize;i++)
    {
        ex[i]=heights[i];
    }
     bubblesort(ex,heightsSize);
    int c=0;
    for(int i=0;i<heightsSize;i++)
    {
        if(ex[i]!=heights[i])
        {
             c++;
        }
    }
    return c;
}