class Solution {
public:
    int strStr(string haystack, string needle) {
        
        
        if(needle.size()==0 || haystack==needle)
            return 0;
        
    
        
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {   
                if(needle.size()==1)
                    return i;
                
                int j=i+1;
                int k=1;
                
                while(j<haystack.size())
                {   
                    if(haystack[j]==needle[k])
                    {
                        k++;
                        
                        if(k==needle.size())
                        {
                           return i;
                        }
                        
                    }
                    
                    else
                    {   
                       
                        break;
                    }
                    
                    j++;
                    
                }
                
                
            }
            
            
            
           
        }
        
        
        return -1;
    }
};
