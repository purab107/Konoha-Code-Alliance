class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         std::unordered_map<int, int> indices;

    // Iterate through the array
    for (int i = 0; i < nums.size(); ++i) {
        // Calculate the complement of the current number
        int complement = target - nums[i];
        // Check if the complement exists in the hashmap
        if (indices.find(complement) != indices.end()) {
            // If found, return the indices of the complement and the current number
            return { indices[complement], i };
        }
        // Otherwise, store the index of the current number in the hashmap
        indices[nums[i]] = i;
    }

    // If no solution is found, return an empty vector
    return {};
    }
};