//NLTH Q3 
//https://prepinsta.com/wipro-coding-questions/

#include<bits/stdc++.h>
#define n 3
using namespace std;

int check(int m1[][n],int m2[][n])
{
    int i,j;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(m1[i][j]!=m2[i][j])
            {
                return 0;
            }
        }
    }
    
    return 1;
}

int main()
{
    int m1[n][n],m2[n][n],i,j;
    
    cout<<"Enter m1 : \n";
    
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cin>>m1[i][j];
        }
    }
    
    cout<<"Enter m2 = \n";
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cin>>m2[i][j];
        }
    }
    
    if(check(m1,m2))
    {
        cout<<"Equal";
    }
    else
    {
        cout<<"Not Equal";
    }
    return 0;
}