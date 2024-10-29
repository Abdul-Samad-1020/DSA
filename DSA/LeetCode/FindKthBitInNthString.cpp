class Solution {
public:
    char findKthBit(int n, int k) {
        return recursive(n, k);
    }

private:
    // Recursive helper function
    char recursive(int n, int k) {
        // Base case: S_1 = "0"
        if (n == 1) {
            return '0';
        }

        // Length of S_(n-1)
        int length = (1 << (n - 1)) - 1;  // Length is 2^(n-1) - 1

        // If k is in the first part (S_(n-1))
        if (k <= length) {
            return recursive(n - 1, k);
        }
        // If k is the middle part, it's always '1'
        else if (k == length + 1) {
            return '1';
        }
        // If k is in the reversed and inverted part
        else {
            // Adjust k to find the corresponding position in the first part
            k = 2 * length + 2 - k;
            // Invert the result for the third part (invert the bit)
            char bit = recursive(n - 1, k);
            return (bit == '0') ? '1' : '0';
        }
    }
};