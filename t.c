#include<stdio.h>
#include<math.h>
int main ()
{
    int i,n,s;
    printf("nhap n=");
    scanf("%d",&n);
    s=1;
    for(i=1;i<=n;i++)
    {
     s=s+i;
     }
  printf("s=%d",s);
}