#include <iostream>
#include <map>
using namespace std;

int main() {
        string s="geeksforgeeks";
        //cin>>s;
        
        
        map<char,int> mp;
        
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        
        for(auto itr=mp.begin();itr!=mp.end();++itr)
        {
            cout<<itr->first<<" "<<itr->second<<endl;
        }
        
	return 0;
}
