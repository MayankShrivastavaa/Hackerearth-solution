#include<stdio.h>
void first(int g,int p)
{
    int i,n,j,k,gp=0,pp=0,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&j,&k);
        if(j==1)gp++;
        if(k==1)pp++;
    }
    c=gp*g+pp*p;
    printf("%d\n",c);
}
void main()
{
    int t,g,p,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&g,&p);
       if(i%2==1)first(g,p);
       else first(p,g);
    }
}
