class Solution {
public:
      int removeElement(vector<int>& nums, int val) {
        int read = 0, write = 0;
        while (read < nums.size()) {
            if (nums[read] != val) {
                swap(nums[write], nums[read]);
                write++;
            }
            read++;
        }
        return write;
    }
};