class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long rightSum=0;
        long long leftSum=0;
        for(int i=0;i<n;i++){
            rightSum+=nums[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            leftSum+=nums[i];
            rightSum-=nums[i];
            if(leftSum>=rightSum)count++;
        }
        return count;
    }
};
