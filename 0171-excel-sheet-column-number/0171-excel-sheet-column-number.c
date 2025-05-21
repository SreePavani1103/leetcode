int titleToNumber(char* columnTitle) {
    int k=0;
    while(*columnTitle)
    {
        k=k*26+(*columnTitle-'A'+1);
        columnTitle++;
    }
    return k;
}