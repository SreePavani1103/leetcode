int reverse(int x){
   int ori=x;
   long long num=0;
   while(x)
   {
   int  rev=x%10;
     num=num*10+rev;
     x=x/10;
   }
   if(num<INT_MIN  || num>INT_MAX)
   return 0;
   return (int)num;
}
   