class Solution {
    static ArrayList<Integer> fun(String s)
    {
        String []a1=s.split("\\.");
        int n=a1.length;
        int[]a2=new int[n];
        int j=0;
        for(int i=0;i<n;i++)
        {
             a2[j++]=Integer.parseInt(a1[i]);
        }
       ArrayList<Integer>arr=new ArrayList<>();
       for(int i=0;i<j;i++)
       {
            arr.add(a2[i]);
       }
       return arr;
    }
    public int compareVersion(String version1, String version2) {
       ArrayList<Integer>a1= fun(version1);
         ArrayList<Integer>a2=fun(version2);
         int n=Math.max(a1.size(),a2.size());
         for(int i=0;i<n;i++)
         {
            int v1=(i<a1.size())?a1.get(i):0;
            int v2=(i<a2.size())?a2.get(i):0;
            if(v1<v2)
            return -1;
            if(v2<v1)
            return 1;
         }
         return 0;
    }
}