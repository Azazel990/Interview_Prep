//NLTH Q7
//https://prepinsta.com/wipro-nlth/placement-papers/coding-ability/
#include<bits/stdc++.h>
using namespace std;

int sortArray(int n,int arr[])
{
    int i,j,flag=0,temp;
    
    for(i=0;i<=n-1;i++)
    {
        flag = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}


int findMaxElement(int arr1[],int arr2[],int n1,int n2)
{
    int max,i,j;
    
    if(arr1[n1-1] > arr2[n2-1])
    {
        cout<<arr1[n1-1];
    }
    else
    {
        cout<<arr2[n2-1];
    }
    return 0;
}
int main()
{ 
    int i,j,m,n1=12,n2=11,arr1[100]={2,5,1,3,9,8,4,6,5,2,3,11},arr2[100]={11,13,2,4,15,17,67,44,2,100,23};
   
    sortArray(n1,arr1);
    sortArray(n2,arr2);
    findMaxElement(arr1,arr2,n1,n2);
    
    return 0;
}