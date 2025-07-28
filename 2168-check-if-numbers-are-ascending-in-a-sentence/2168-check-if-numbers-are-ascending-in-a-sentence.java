class Solution {
    public boolean areNumbersAscending(String s) {
        int p=-1;
          String [] k=s.split(" ");
        for(String ks:k)
        {
            if(Character.isDigit(ks.charAt(0)))
            {
            int n=Integer.parseInt(ks);
            if(n<=p)
            return false;
            else
            p=n;
            }
        }
      
         return true;
 }
}