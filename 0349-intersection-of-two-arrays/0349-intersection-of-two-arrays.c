/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize=0;
    int* ans=(int *)malloc(nums1Size*sizeof(int));
    int c=0;
    for(int i=0;i<nums1Size;i++)
    {
        for(int j=0;j<nums2Size;j++)
        {
            if(nums1[i]==nums2[j])
            {
                int e=0;
                for(int k=0;k<c;k++)
                {
                        if(ans[k]==nums1[i])
                        {
                            e=1;
                            break;
                        }
                }
                if(!e)
                {
                    ans[c++]=nums1[i];
                }
                break;
            }
        }
    }
    *returnSize =c;
    return ans;
}