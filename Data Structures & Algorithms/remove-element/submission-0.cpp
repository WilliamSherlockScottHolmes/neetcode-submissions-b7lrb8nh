class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // This pointer tracks where the next 'non-val' element goes
        
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is NOT the value we want to remove
            if (nums[i] != val) {
                // Move it to the front at position k
                nums[k] = nums[i];
                k++;
            }
        }
        
        // k now represents the number of elements not equal to val
        return k;
    }
};