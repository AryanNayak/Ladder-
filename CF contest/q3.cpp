#include<iostream>
#include<vector>
#include<queue>
using namespace std; 

 int minPath(int sr, int sc, int er, int ec, vector<vector<int> >& dp, vector<vector<int> >& grid)
    {
     
        if(sr == er && sc == ec)
        {
             dp[sr][sc] = grid[sr][sc]; 
             grid[sr][sc] = 0;
             return dp[sr][sc]; 
        }
        
        if(dp[sr][sc] != 1e8)
            return dp[sr][sc]; 
        
        
        if(sr + 1 <= er)
            dp[sr][sc] = min(dp[sr][sc], minPath(sr + 1, sc, er, ec, dp, grid)); 
        
        if(sc + 1 <= ec)
            dp[sr][sc] = min(dp[sr][sc], minPath(sr, sc + 1, er, ec, dp, grid)); 
        
         dp[sr][sc] += grid[sr][sc]; 
         grid[sr][sc] = 0;
         return dp[sr][sc]; 
        
    }
int maxPath(int sr, int sc, int er, int ec, vector<vector<int> >& dp, vector<vector<int> >& grid)
    {
     
        if(sr == er && sc == ec)
        {
             dp[sr][sc] = grid[sr][sc]; 
             return dp[sr][sc]; 
        }
        
        if(dp[sr][sc] != -1e8)
            return dp[sr][sc]; 
        
        
        if(sr + 1 <= er)
            dp[sr][sc] = max(dp[sr][sc], maxPath(sr + 1, sc, er, ec, dp, grid)); 
        
        if(sc + 1 <= ec)
            dp[sr][sc] = max(dp[sr][sc], maxPath(sr, sc + 1, er, ec, dp, grid)); 
        
         return dp[sr][sc] += grid[sr][sc]; 
        
    }
int main()
{

    int t; 
    cin >> t; 

    while(t--)
    {

        int c;
        cin >> c; 

        vector<vector<int> > mat(2, vector<int>(c, 0));

        for(int i =0; i < 2; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cin >> mat[i][j]; 
            }
        }

        int n = 2, m = mat[0].size(); 
        
        if(n == 0 || m == 0)
            return 0; 
        
        vector<vector<int> > dp1(n, vector<int>(m, 1e8)); 
        
         minPath(0, 0 , n - 1, m - 1, dp1, mat); 

        vector<vector<int> > dp2(n, vector<int>(m, -1e8)); 

        int ans = maxPath(0, 0 , n - 1, m - 1, dp2, mat); 

        cout << ans << endl;
    }
    return 0; 
}

