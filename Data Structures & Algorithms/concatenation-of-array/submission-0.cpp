class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //given array nums of length n
        //create array ans = nums + num

        //initialize an empty result array of size 2n
        //where n is the length of the input array

        //use a loop that runs twice and prints

        vector<int> ans;
        for (int i = 0; i < nums.size()*2; i++) {
            //the loop runs for nums.size()*2 times so if it was 3, 3*2 = 6 times
            //the ans.push_back function appends the numbers in num into ans
            //so it stores in ans the given arr = [1,2,3]
            //if i = 0, then i%3 = 0
            // ans = [1]
            //i = 1, then i%3 = 1
            // ans = [1,2]
            //i = 2, then i%3 = 2
            // ans = [1,2,3]
            //now i = 3, then i%3 = 0
            // ans = [1,2,3,1]
            // i = 4, then i%3 = 1
            // ans = [1,2,3,1,2]
            // i = 5, then i%3 = 2
            // ans = [1,2,3,1,2,3]
            ans.push_back(nums[i%nums.size()]);
            
        }

        return ans;
       }
};