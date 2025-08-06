class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n=grid.length;
        int []a= new int [n*n];
        int k=0;
        for(int i=0;i<n;i++)
        { 
            for(int j=0;j<n;j++)
            {
                a[k++]=grid[i][j];
            }
        }
        Arrays.sort(a);
        int [] res=new int [2];
        for(int i=0;i<k-1;i++)
        {
             if(a[i]==a[i+1])
             {
             res[0]=a[i];
             break;
             }
        }
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=a[i];
        }
        int s=(k*(k+1))/2;
         res[1]=s-sum+res[0];
         return res;
    }
}