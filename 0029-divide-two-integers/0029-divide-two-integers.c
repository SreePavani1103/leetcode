int divide(int dividend, int divisor) {
    long long l=dividend;
    long long m=divisor;
    int op=1;
    if(l<0 && m>0 ||l>0 &&m<0)
     {
       op=-1;
    }
      if (l == INT_MIN && m== -1)
        return INT_MAX;  // prevents overflo
    if(l<0)
    l=-l;
    if(m<0)
    m=-m;
      long long k=l/m;
   return op*k;
}