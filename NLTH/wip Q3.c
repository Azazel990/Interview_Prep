//wip Q3
//https://prepinsta.com/wipro-nlth/placement-papers/coding-ability/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{ 
    char s[100];
    int i,j,k,c=0;
    
    printf("Please Enter a String : ");
    gets(s);
    
    for(i=0;i<=strlen(s)-1;i++)
    {
        if(isspace(s[i]))
        {
            c++;
        }
    }
    c++;
    printf("words = %d",c);
    return 0;
}