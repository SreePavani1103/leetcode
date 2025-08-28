class Solution {
    public String shiftingLetters(String s, int[] shifts) {
        int n = s.length();
        char[] ch = s.toCharArray();

        int totalShift = 0;
        // Traverse from right to left and accumulate shifts
        for (int i = n - 1; i >= 0; i--) {
            totalShift = (totalShift + shifts[i]) % 26;
            ch[i] = (char) ('a' + (ch[i] - 'a' + totalShift) % 26);
        }

        return new String(ch);
    }
}
