int sumOfUnique(int* nums, int numsSize) {
  int dc[101];
  int j=0;
  for(int i=0;i<numsSize;i++)
  {
    dc[nums[i]]++;
  } 
  int sum=0;
  for(int i=0;i<=100;i++)
  {
    if(dc[i]==1)
    {
        sum+=i;
    }
  } 
  return sum;
}