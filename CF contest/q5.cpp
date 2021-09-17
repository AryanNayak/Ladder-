#include<iostream>
#include<algorithm>
using namespace std; 

int main()
{
    
    int t; 
    cin >> t; 
    
    while(t--)
    {
        
    int n; 
    cin >> n; 
    
    string s; 
    cin >> s; 
    
    string t = s; 
    
    sort(t.begin(),t.end()); 
    
    int ans = 0; 
    
    for(int i =0 ; i < n; i++)
    {
        if(s[i] != t[i])
        {
            ans++; 
        }
    }
    
     
     cout << ans << endl; 
        
    }
    return 0; 
}

