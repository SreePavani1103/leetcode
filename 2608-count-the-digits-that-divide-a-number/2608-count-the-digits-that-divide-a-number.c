int countDigits(int num) {
   int o=num;
   long long c=0;
   while(num>0) 
   {
    int r=num%10;
    num=num/10;
    if(r!=0 && o%r==0)
    {
        c++;
    }
   }
   return c;
}