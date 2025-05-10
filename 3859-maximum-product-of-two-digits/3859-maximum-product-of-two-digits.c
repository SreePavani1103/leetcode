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
int maxProduct(int n) {
      int k=log10(n)+1;
      int a[k];
      int j=0;
    while(n!=0)
    {
        a[j]=n%10;
        j++;
        n=n/10;
    }
    
    merge_sort(a,0,j-1);
    return a[j-1]*a[j-2];
}