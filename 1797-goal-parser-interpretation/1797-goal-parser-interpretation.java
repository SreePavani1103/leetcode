class Solution {
    public String interpret(String command) {
        String s="";
        int n=command.length();
        for(int i=0;i<n;i++)
        {
            if(command.charAt(i)=='G')
            s+="G";
            else if(i+1<n && command.charAt(i)=='(' && command.charAt(i+1)==')')
            {
            s+="o";
            i+=1;
            }
            else if(i+3<n && command.charAt(i)=='('&& command.charAt(i+1)=='a' && command.charAt(i+2)=='l' && command.charAt(i+3)==')' )
            {
            s+="al";
            i+=3;
            }
        }
        return s;
    }
}