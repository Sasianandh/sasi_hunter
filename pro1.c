#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
char a[100];
int i,j,k,m,n,x=0,y;
gets(s);
gets(a);
m=strlen(s);
n=strlen(a);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(s[i]==a[i])
        {
            x++;
            break;
        }
        else
        break;
    }
    if(x>0)
    {
        y++;
       x=0;
    }
    }
    for(i=0;i<y;i++)
{
    printf("%c",s[i]);
}
}
    
