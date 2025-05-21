int calPoints(char** operations, int operationsSize) {
    int stack[1001];
    int top=-1;
    for(int i=0;i<operationsSize;i++)
    {
        int ch=operations[i][0];
        if(ch!='C' && ch!='D'  && ch!='+')
        {
            top++;
            stack[top]=atoi(operations[i]);
        }
        else if( ch=='C')
        {
            top--;
        }
        else if (ch=='D')
        {
            int d=stack[top]*2;
            top++;
            stack[top]=d;
        }
        else 
        {
            int k=stack[top]+stack[top-1];
            top++;
            stack[top]=k;
        }
    }
    int sum=0;
    for(int i=top;i>=0;i--)
    {
        sum+=stack[i];
    }

return sum;
}