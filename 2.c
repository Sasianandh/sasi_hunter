#include<stdio.h>
#include<string.h>
void main()
{
int a[100],n,i,j,t,sum=1,ans=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
{
    if(a[i]<=a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}

for(j=1;j<n-i;j++)
{
    sum=sum*10;
}
ans=ans+(a[i]*sum);
sum=1;
}
printf("%d",ans);
}
