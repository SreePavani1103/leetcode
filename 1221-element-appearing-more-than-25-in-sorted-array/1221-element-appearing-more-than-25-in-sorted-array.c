int findSpecialInteger(int* arr, int arrSize) {
   int n=arrSize;
   int k=n/4;
   int l=1; 
   for(int i=1;i<n;i++)
   {
        if(arr[i]==arr[i-1])
        {
        l++;
        if(l>k)
        return arr[i];
        }
        else
        l=1;
   }
    return arr[0];
}