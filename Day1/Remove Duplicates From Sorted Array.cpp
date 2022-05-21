class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        // In Linear Time and Constant Space
        
        int cur=1;
        int lst=0;
        
        while(cur!=nums.size())
        {
            if(nums[cur]!=nums[lst])
            {
                swap(nums[++lst],nums[cur]);
                                      
                cur++;
                
            }
            else
                cur++;
        }
        
        
        return lst+1;
        
    }
};
