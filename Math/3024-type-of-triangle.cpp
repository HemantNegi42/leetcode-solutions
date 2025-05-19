class Solution {
public:
    string triangleType(vector<int>& nums) {
        int count = 0;
        if (nums[0] == nums[1])
            count++;
        if (nums[0] == nums[2])
            count++;
        if (nums[1] == nums[2])
            count++;
        if (count == 3)
            return "equilateral";
        if ((nums[0] + nums[1]) <= nums[2] || (nums[0] + nums[2]) <= nums[1] ||
            (nums[1] + nums[2]) <= nums[0])
            return "none";
        if (count == 1)
            return "isosceles";
        return "scalene";
    }
};
