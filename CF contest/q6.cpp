#include<iostream>
using namespace std; 

int check(int a, int b, int arr[], int arr1[])
{
    int num = 0;
    for(int i =0; i < 5; i++)
    {
        if(arr[i] < arr1[i])
            num++;
    }

    if(num >= 3)
        return a; 

    return b; 

}
int main()
{
    int t;
    cin >> t; 

    while(t--)
    {
        int n;
        cin >> n; 

        int arr[n][5];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                cin >> arr[i][j]; 
            }
        }


        int player = 0; 

        for(int i = 1; i < n; i++)
        {


            player = check(player, i, arr[player], arr[i]); 

        }


        bool flag = true; 

        for(int i =0 ; i < n; i++)
        {   
            if(player != check(player, i, arr[player], arr[i]))
            {
                flag = false; 
                break; 
            }

        }

        if(flag )
        {
            cout << player + 1 << endl; 
        }
        else{
            cout << -1 << endl; 
        }
        
    }
}