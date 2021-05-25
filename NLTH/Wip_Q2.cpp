#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s={'U','D','D','D','U','D','U','U'};
    int i,j,k,h=0,c=0;
    
    for(i=0;i<=s.length()-1;i++)
    {
        if(s[i]=='U')
        {
            h++;
            cout<<"i = "<<i<<" h = "<<h<<endl;
            if(h==0)
            {
                c++;
            }
        }
        else
        {
            h--;
             cout<<"i = "<<i<<" h = "<<h<<endl;
            if(h<=0)
            {
                while(s[i]=='D')
                {
                    h--;
                     cout<<"i = "<<i<<" h = "<<h<<endl;
                    i++;
                }
                if(h==0)
                {
                    c++;
                }
            }
        }
    }
    
    cout<<"Valleys = "<<c;
    return 0;
}