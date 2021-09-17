#include<iostream>
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
        
        vector<vector<int> > mat(2, vector<int>(n)); 

        
        for(int i =0; i < 2; i++)
        {
            string s; 
            cin >> s; 
            for(int j = 0; j < n; j++)
            {
                    mat[i][j] = s[j] - '0';    
            }
        }
        

        int ans = 0; 
        
        for(int i = 0; i < n; i++)
        {
            if(mat[1][i] == 1)
            {
            if(mat[0][i] == 0)
            {
                mat[0][i] = -1; 
                ans++; 
            }
            else if((i != 0 && mat[0][i - 1] == 1))
            {
                // cout <<i - 1 << endl;
                mat[0][i - 1] = -1; 
                ans++; 
            }
            else if((i != (n - 1) && mat[0][i + 1] == 1))
            {
                // cout << i + 1 << endl;
                mat[0][i + 1] = -1; 
                ans++; 
            }
        
            }
        }
    
        cout << ans << endl; 

        
    }
    return 0;
}

