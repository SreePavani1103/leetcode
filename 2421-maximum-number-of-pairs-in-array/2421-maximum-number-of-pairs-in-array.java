class Solution {
    public int[] numberOfPairs(int[] nums) {
        HashMap<Integer,Integer>m1=new HashMap<>();
        for( int x:nums)
        {
            m1.put(x,m1.getOrDefault(x,0)+1);
        }
        int k=0;
        int l=0;
        for(int c:m1.keySet())
        {
           k+=m1.get(c)/2;
           l+=m1.get(c)%2;
        }
        int []a=new int[2];
        a[0]=k;
        a[1]=l;
        return a;
    }
}