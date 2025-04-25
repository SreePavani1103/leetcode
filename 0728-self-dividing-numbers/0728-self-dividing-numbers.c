/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int *temp=(int *)malloc((right-left+1)*sizeof(int));
    int c=0;
    for(int i=left;i<=right;i++)
    {
        int n=i;
        int k=1;
        while(n>0)
        {
            int r=n%10;
            if(r==0 || i%r!=0)
            {
                k=0;
                break;
            }
            n=n/10;
        }
        if(k==1)
        {
              temp[c++]=i;
        }
    }
    *returnSize=c;
    int *ans=(int*)malloc(c*sizeof(int));
    for(int i=0;i<c;i++)
    {
        ans[i]=temp[i];
    }
    return ans;
}