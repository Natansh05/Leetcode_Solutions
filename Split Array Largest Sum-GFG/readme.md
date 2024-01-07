## GFG Problem Of The Day

### Today - 07 January 2024
### Que - Split Array Largest Sum
The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/split-array-largest-sum--141634/1)

![](https://badgen.net/badge/Level/Hard/red)

### My Approach
I'm using binary search to find the minimum possible largest sum. The idea is to set the range of possible sums between 0 and the sum of all elements in the array. Then, I perform a binary search to find the minimum sum that satisfies the given conditions using a helper function `solve`.

- **Check Function (solve):** We define a function to check if it's possible to split the array into at most `K` parts such that the maximum sum of any part is less than or equal to `mid`. This function returns `true` if it's possible, `false` otherwise.
- **Binary Search Implementation:** We use binary search to find the minimum `mid` such that the `solve` function returns `true`. If it returns `true`, we update the answer and move the high pointer to `mid - 1` to search for a smaller value. If it returns `false`, we need to search in the right half, so we move the low pointer to `mid + 1`.


### Time and Auxiliary Space Complexity

- **Time Complexity**: `O(N * log(S))`, where N is the length of the array and S is the sum of all elements.
- **Auxiliary Space Complexity**: `O(1)`
