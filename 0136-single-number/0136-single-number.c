int singleNumber(int* nums, int numsSize) {
    int c=0;
  for(int i=0;i<numsSize;i++)
  {
    c^=nums[i];
  }
  return c;
}