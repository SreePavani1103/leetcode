void merge_sort(int a[],int l,int m,int h)
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
        res[k++]=a[j++];
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
      a[i]=res[k++];
    }
}
void merge(int a[],int l,int h)
{
    if(l<h)
    {
        int m=(l+h)/2;
        merge(a,l,m);
        merge(a,m+1,h);
        merge_sort(a,l,m,h);
    }
}
int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
  int n=seatsSize;
  int m=studentsSize;
  merge(seats,0,n-1);
  merge(students,0,m-1);
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=abs(seats[i]-students[i]);
  }
  return sum;
}