class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        //To Do in Linear Time
        //Unordered_map can be used
        
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())    // Element Not Present
                mp[nums[i]]++;
            else
                return nums[i];
        }
        
        return -1;
    }
};
