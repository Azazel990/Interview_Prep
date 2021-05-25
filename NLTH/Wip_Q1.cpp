//Wipro question 1 
// https://prepinsta.com/wipro-coding-questions/

#include<bits/stdc++.h>
using namespace std;

int sockMerchant(int arr[],int n)
{
    int e,c=0,pairs=0;
    for(int i=0;i<=n-1;i++)
    {
        e = arr[i]; 
        c=0;
        while(arr[i]==e)
        {
            c++;
            i++;
        }
        pairs = pairs + c/2;
    }
    return pairs;
}

int sort(int arr[],int n)
{
    int f = 0,j,temp;
    for(int i = 0;i<=n-1;i++)
    {
        f = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
               f = 1;
            }
        }
        if(f==0)
        {
            break;
        }
    }
    return 0;
}
int main()
{
    int arr[100]= {10,20,20,10,10,30,50,10,20},i,j,n=9,pairs;
    sort(arr,n);
    
    // for(i=0;i<=n-1;i++)
    // {
    //   cout<<arr[i]<<endl;
    // }
    pairs = sockMerchant(arr,n);
    cout<<"pairs = "<<pairs;
    return 0;
}