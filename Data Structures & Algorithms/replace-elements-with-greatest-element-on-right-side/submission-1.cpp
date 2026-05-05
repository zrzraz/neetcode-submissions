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

////1. Reset arr[j] to -1
// 2. Scan everything to the right
// 3. Keep replacing arr[j] with the biggest value found

//time complexity = O(n^2)using 2 for loops not optimal 

// class Solution {
// public:
//     vector<int> replaceElements(vector<int>& arr) {
//         int maxRight = -1;

//         for (int i = arr.size() - 1; i >= 0; i--) {
//             int current = arr[i];     // save original value
//             arr[i] = maxRight;        // replace with greatest on right
//             maxRight = max(maxRight, current); // update max for next left element
//         }

//         return arr;
//     }
// };
        
    }
};