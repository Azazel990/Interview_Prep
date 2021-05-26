//NLTH Q4
//https://prepinsta.com/wipro-nlth/placement-papers/coding-ability/
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    string s = "rohit neeraj aish neeraj",t = "neeraj";
    int i,j,k,c=0;
    
    // cin>>s;
    // cin>>t;
    for(i=0;i<=s.length()-1;i++)
    {
        if(s[i]==t[0])
        {
            j = 0;
            while(s[i]==t[j])
            {
                cout<<"t = "<<t[j]<<endl;
                
                if(i>=s.length()-1)
                {
                    j++;
                    break;
                }
                i++;j++;
                
            }
            j--;
            if(j==t.length()-1)
            {
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}