/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    *returnSize=heightsSize;
    int n=heightsSize;
    for(int  i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(heights[j]<heights[j+1])
            {
                int temp=heights[j];
                heights[j]=heights[j+1];
                heights[j+1]=temp;
                char *h=names[j];
                names[j]=names[j+1];
                names[j+1]=h;
            }
        }
    }
    return names;
}