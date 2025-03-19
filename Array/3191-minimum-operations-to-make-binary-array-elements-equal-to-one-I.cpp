class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-2;i++){
            if(nums[i]==1)continue;
            for(int j=0;j<3;j++){
                if(nums[j+i]==1)nums[j+i]=0;
                else nums[j+i]=1;
            }
            count++;
        }
        if(nums[n-1]==0||nums[n-2]==0)return -1;
        return count;
    }
};
