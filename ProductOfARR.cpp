class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);  // Output array initialized to 1

        // Left pass: Compute product of all elements to the left of each index
        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = leftProduct;  // Store the left product for the current index
            leftProduct *= nums[i];  // Update left product for the next index
        }

        // Right pass: Compute product of all elements to the right of each index
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= rightProduct;  // Multiply with the right product for the current index
            rightProduct *= nums[i];  // Update right product for the next index
        }

        return ans;
    }
};
