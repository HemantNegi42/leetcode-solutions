class Solution {
bool binsearch(set<int>& s,int target){
    set<int> :: iterator itr;
    for (itr = s.begin();itr != s.end(); itr++){
        if(target==*itr)
        return true;
        }
        return false;
    }

public:
    bool search(vector<int>& nums, int target) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
      return  binsearch(s,target);
    }
};
