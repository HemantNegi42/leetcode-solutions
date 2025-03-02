class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[k]=nums[i];
                k++;
            }
        }
        nums[k]=nums[n-1];
        return k+1;
    }
};
