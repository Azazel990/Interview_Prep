//NLTH Q6
//https://prepinsta.com/wipro-nlth/placement-papers/coding-ability/
#include<bits/stdc++.h>
using namespace std;

void solution(int arr[],int n,int s,int e)
{
    int i;
    for(i=0;i<=n-1;i++)
    {
        if(arr[i]>=s&&arr[i]<=e)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{ 
    int i,j,m,n,arr[100],s,e;
    
    cin>>n>>s>>e;
    
    for(i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    solution(arr,n,s,e);
    return 0;
}