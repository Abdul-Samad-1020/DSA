#include <string>

class Solution {
public:
    int minSwaps(std::string s) {
        int whiteCount = 0;  // To count the number of '0's seen so far
        int swaps = 0;       // To count the number of swaps needed

        for (char c : s) {
            if (c == '1') {
                // For each black ball, the number of swaps needed is
                // equal to the number of white balls encountered before it.
                swaps += whiteCount;
            } else {
                // Increment the white ball count for each '0' encountered.
                whiteCount++;
            }
        }
        
        return swaps;  // Return the total number of swaps needed
    }
};

// Example usage:
// Solution solution;
// int result = solution.minSwaps("010110");
// std::cout << "Minimum swaps needed: " << result << std::endl;
