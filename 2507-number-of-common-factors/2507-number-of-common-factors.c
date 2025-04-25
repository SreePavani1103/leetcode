int min(int a,int b)
{
    if(a<b)
    return a;
    else
    return b;
}
int commonFactors(int a, int b) {
    int c=0;
  int m=min(a,b);
  for(int i=1;i<=m;i++)
  {
    if(a%i==0 && b%i==0)
    {
        c++;
    }
  } 
  return c;
}