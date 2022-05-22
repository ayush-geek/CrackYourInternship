class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyce Moore Voting Algorithm
        
      
        int tem=nums[0];
        int ct=1;
        
        for(int i=1;i<nums.size();i++){
               // cout<<tem<<" ";
            if(nums[i]== tem)
                ct++;
            
            else
                ct--;
            
            if(ct==0){
                tem=nums[i];
            ct=1;}
            
        }
        
        
        return tem;
    }
};
