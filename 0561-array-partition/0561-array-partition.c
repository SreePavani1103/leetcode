int compare(const void *c,const void *d )
{
    return (*(int*)c-*(int *)d);
}
int arrayPairSum(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int sum=0;
    for(int i=0;i<numsSize;i+=2)
    {
        sum+=nums[i];
    }
    return sum;
}