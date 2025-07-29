class Solution {
    public boolean squareIsWhite(String coordinates) {
        int k=coordinates.charAt(0);
        int l=coordinates.charAt(1);
        if((k+l)%2==0)
        return false;
        else
        return true;
    }
}