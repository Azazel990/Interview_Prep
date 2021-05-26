//NLTH Q2
//https://prepinsta.com/wipro-nlth/placement-papers/coding-ability/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100][100],i,j,max=0,sum=0,m,n;
    
    cin>>m>>n;
    
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    max =  0;
    for(i=0;i<=m-1;i++)
    {
        sum = 0;
        for(j=0;j<=n-1;j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
        if(max < sum)
        {
            max = sum; 
        }
    }
    
    cout<<"max = "<<max;
    return 0;
}