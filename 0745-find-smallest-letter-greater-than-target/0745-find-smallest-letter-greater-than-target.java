class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int n=letters.length;
        char min=letters[0];
       char k=letters[0];
        for(int i=0;i<n;i++)
        {
              if(min>letters[i] )
               {
                    min=letters[i];
               }
            if(letters[i]>target && (k<=target || letters[i]<k))
            {
                k=letters[i];
            }

        }
       // char k=s.charAt(0);
                return k;
    }
}