class Solution {
public:
    bool isAnagram(string s, string t) {

        //anagram is a string that contains the 
        //exact same characters as another string but order can be different

        //given two strings s and t
        //this only compares num of characters, not if the same characters exist
    //     for (int i = 0; i < s.size(); i++) {
    //         for (int j = 0; j <= t.size(); j++) {
    //             if (s[i] = t[j]) {
    //             return true;
    //         } else {
    //             return false;
    //         }
        
    // }
    // }

        // i can sort but this isnt necessary, a better approach is counting/hashing

                if (s.size() != t.size()) {
                return false;
            }

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        return countS == countT;
    }
};
