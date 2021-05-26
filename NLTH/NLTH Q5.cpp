//NLTH Q5
//https://prepinsta.com/wipro-nlth/placement-papers/coding-ability/
#include<bits/stdc++.h>
using namespace std;

int SumNumberDivisible(int m,int n)
{
    int i,sum=0;
    for(i=m;i<=n;i++)
    {
        if(i%3==0&&i%5==0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{ 
    int i,j,k,c=0,m,n;
    cin>>m>>n;
    
    if(m>=n)
    {
        cout<<"Invalid Values \n";
    }
    else{
        cout<<SumNumberDivisible(m,n);
    }
    
    return 0;
}