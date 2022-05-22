class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        vector<vector<int>> res;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();)
        {
            int z=nums[i];
            int tgt=-nums[i];
            
            int s=i+1;
            int e=nums.size()-1;
            
            while(s<e )
            {
                if(nums[s]+nums[e]<tgt)
                    s++;
                else if(nums[s]+nums[e]>tgt)
                    e--;
                else
                {
                    res.push_back({nums[i],nums[s],nums[e]});
                  
                    int z1=nums[s];
                    while(s<nums.size() && z1==nums[s])
                        s++;
                    int z2=nums[e];
                    while(e>=0 && z2==nums[e])
                        e--;
                    
                   
                }
                    
            }
            
            while( i<nums.size() && nums[i]==z)
                i++;
        }
        
        return res;
    }
};
