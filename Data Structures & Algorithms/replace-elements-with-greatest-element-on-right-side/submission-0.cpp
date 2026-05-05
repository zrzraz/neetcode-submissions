class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        //given array arr
        //replace every element with the element on its right
        //if its greater, otherwise leave it and replace the last
        //element with -1

        // arr = 1,3,5,6
        // arr = 3,6,-1
        // arr = 6,-1

        // arr.push_back(-1)

        for (int j = 0; j < arr.size(); j++) {
            arr[j] = -1;
            for (int i = j + 1; i <arr.size(); i++) {
            // if (arr[i] < arr[i+1]) {
            //     arr[i] = arr[i+1];
            // } 
            // here i am only comparing neighbors, but the point
            // is to keep track of the maximum to the right and replace

            if (arr[i] > arr[j]) {
                arr[j] = arr[i];
            }
        }
        }

        // arr.pop_back(); this is unnecessary i just wanted to use it
        // arr.push_back(-1);
        return arr;
        
    }
};