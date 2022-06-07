class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     
        
        // Naive
        // Shortest String and then comaprae with rest
        // O(n2) solution
        
        
        int sz=INT_MAX;
        string res;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<sz)
            {
                sz=strs[i].size();
                res=strs[i];
                
            }
        }
        
        int cnt=0;
        int minc=INT_MAX;
        
        cout<<res<<"\n";
        
        for(int i=0;i<strs.size();i++)
        {   cnt=0;
            for(int j=0;j<res.size();j++)
            {   
                if(res[j]!=strs[i][j])
                {
                   
                    break;
                }
                else
                    cnt++;
                
               
            
                 
            }
        
           minc=min(cnt,minc);
           
        }
        
        
      return res.substr(0,minc);
    
    
    }
};
