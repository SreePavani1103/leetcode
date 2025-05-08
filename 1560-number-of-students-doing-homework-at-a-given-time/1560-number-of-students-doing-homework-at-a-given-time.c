int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime) {
int n=startTimeSize;
int m=endTimeSize;
int k=queryTime;
int cnt=0;
for(int i=0;i<n;i++)
{
    int l=abs(startTime[i]-endTime[i]);
    if(  startTime[i]<=k && endTime[i]>=k)
    cnt++;
}
return cnt;
}