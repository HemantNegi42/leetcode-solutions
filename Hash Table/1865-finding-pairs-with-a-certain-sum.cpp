class FindSumPairs {
public:
    vector<int> nums1, nums2;
    map<int,int> mp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        int n=nums2.size();
        for(int i=0;i<n;i++){
            mp[nums2[i]]++;
        }
    }

    void add(int index, int val) {
        mp[nums2[index]]--;
        nums2[index] += val;
        mp[nums2[index]]++;
    }

    int count(int tot) {
        int m = nums1.size();
        int counter = 0;
        for(int i=0;i<m;i++){
            int diff=tot-nums1[i];
            counter+=mp[diff];
        }
        return counter;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
