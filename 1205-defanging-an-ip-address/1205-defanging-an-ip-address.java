class Solution {
    public String defangIPaddr(String address) {
        String s="";
        int k=address.length();
        for(int i=0;i<k;i++)
        {
            if(address.charAt(i)>='0'  && address.charAt(i)<='9')
            s+=address.charAt(i);
            else if(address.charAt(i)=='.')
            {
                s+='[';
                s+=address.charAt(i);
                s+=']';
            }
        }
        return s;
    }
}