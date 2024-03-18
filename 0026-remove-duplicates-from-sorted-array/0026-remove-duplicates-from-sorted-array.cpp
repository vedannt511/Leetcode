class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Edge case: empty vector

        int k = 1; // k represents the index for unique elements in the modified nums array
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i]; // Shift non-duplicate elements to the beginning
                k++; // Increment k for the next unique element
            }
        }
        return k; // k represents the count of unique elements
    }
};
