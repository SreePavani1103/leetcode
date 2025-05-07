   void merge(int a[],int l,int m,int h)
   {
         
	int res[h-l+1];
	int k=0;
	int i=l;
	int j=m+1;
	while(i<=m && j<=h)
	{
	   if(a[i]<=a[j])
	   {
	   	res[k++]=a[i++];
		   }
		   else 
		   {
		   	res[k++]=a[j++];
			   }	
    }
    while(i<=m)
    {
    	res[k++]=a[i++];
    }
    
	while(j<=h)
	{
		res[k++]=a[j++];
	}
	k=0;
	for(int i=l;i<=h;i++)
	{
		a[i]=res[k];
		k++;
	}
}
void merge_sort(int a[],int l,int h)
{
	if(l<h)
	{
		int m=(l+h)/2;
		merge_sort(a,l,m);
		merge_sort(a,m+1,h);
		merge(a,l,m,h );
	}
}
   
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int n=nums1Size+nums2Size;
    int ans[n];
    int j=0;
    for(int i=0;i<nums1Size;i++)
    {
        ans[j++]=nums1[i];
    }
    for(int i=0;i<nums2Size;i++)
    {
        ans[j++]=nums2[i];
    }
    merge_sort(ans,0,n-1);
    double k=0;
    if(n%2==0)
    {
        int m=(n-1)/2;
        int l=n/2;
      k=(ans[m]+ans[l])/2.0;
    }
    else
    {
        int l=n/2;
        k=ans[l];
    }
    return k;
}