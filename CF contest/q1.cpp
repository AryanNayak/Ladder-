#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std; 

int main()
{
    
    int t; 
    cin >> t; 
    
    while(t--)
    {
        
        int n; 
        cin >> n; 
        
        unordered_map<int, vector<int> > mp; 
        
        for(int i =2; i <= n; i++)
        {
            int a = n%i;
            mp[a].push_back(i);

            if(mp[a].size() >= 2)
            {
                cout << mp[a][0] << " " << mp[a][1] << endl; 
                break; 
            }   
        }
    }
    
    return 0;   
}

