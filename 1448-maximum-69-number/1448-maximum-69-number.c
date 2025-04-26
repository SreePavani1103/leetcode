int maximum69Number (int num) {
    int temp=num;
    int pl=0,six=-1;
    while(temp>0)
    {
        if(temp%10==6)
        {
            six=pl;
        }
        temp=temp/10;
        pl++;
    }
    if(six==-1)
    return num;
    else
    return num+3*pow(10,six);
}