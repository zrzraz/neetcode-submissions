class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //given an array of &strs
        //group all anagrams into sublists
        //anagrams are words that have the same letters but could be in different orders
        //like my name is an anagram zara raza

        //return the output in any order

        //can i use a hashmap here?
        //store the characters in each string
        //look through other strings and see if same characters exist
        //if so, group those in a different list/vector
        //output those groups

        //create a hashmap

// Structures (also called structs) are a way to group several related variables into one place.

// Each variable in the structure is known as a member of the structure.

// Unlike an array, a structure can contain many different data types: int, string, bool, etc.
        
        //using bool to define if word is anagram or not and then putting them in a hash map?

        // bool isAnagram {
        //     //its an anagram if num of characters are the same
        // }

        // struct word {
        //     char characters;
        //     int numOfCharacters;
        // }

        // //count frequency of characters in each word and store it
        // //go through the vector
        // //identify if same 
        // unordered_map<string, word> countCharacters;

        // // if sameWord push it to a list of vectors

        // for (int i = 0; i < strs.size(); i++) {
        //     countCharacters[strs[i]++];
        // }
        // return isAnagram;

        //uhhh nvm my problem here is that i am comparing every single word with every other word??
        //instead of just verifying from the jump 
        //brurururururuurhhhh

        unordered_map<string, vector<string>> charFreq;

        for (const auto& s : strs) {
            vector<int> count(26,0);
            for (char c : s) {
                count [c-'a']++;
            }
            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            charFreq[key].push_back(s);
        }

        vector<vector<string>> result;

        for (const auto& pair : charFreq) {
            result.push_back(pair.second);
        }
        return result;

    }
};
