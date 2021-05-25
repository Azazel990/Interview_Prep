//NQT Q1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    
    int a,k,j;
    cout<<"Please Enter a string : ";
    cin>>s;
      transform(s.begin(), s.end(), s.begin(), ::tolower);
      k=0;
    for(int i=0;i<=s.length()-1;i++)
    {
        s[i] = 97 - s[i] + 122;
    }
    
    cout<<s;
    return 0;
}