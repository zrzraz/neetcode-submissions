class Solution {
public:
    bool isSubsequence(string s, string t) {
        //given two strings s and t
        //return true if s is a subsequence of t
        //a subsequence is an instance of a new word in the same order
        //but can have missing letters
        //ex: ace is a subsequence of abcde but aec is not

        //i would first go through both words and see if the same characters exist
        //return false immediately if same characters dont exist

        int i = 0; // pointer for s
        int j = 0; // pointer for t

        while ( i < s.length() && j < t.length()) {
            if (s[i] ==t[j]) {
                i++;
            }
            j++;
        }

        return i == s.length();
    }
};