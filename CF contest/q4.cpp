#include<iostream> 
#include<vector>
#include<algorithm>
#include<utility>
using namespace std; 

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n; 
        cin >> n;

        vector<long long> arr(n); 

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
        }

       
        long long ans = 0;

        
        for(int i = 1; i < n; i++)
        {

            ans = max(ans, 1LL*(arr[i]*arr[i - 1]));

        }

        

        cout << ans << endl;

    }
    return 0; 
}