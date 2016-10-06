#include<stdio.h>
int main()
{
int s,p,i,j,a[100][100],sum=0,k,max,sl;
printf("\n enter the no of sales person and no of products");
scanf("%d %d",&s,&p);
for(i=1;i<=s;i++)
{
for(j=1;j<=p;j++)
{
scanf("%d",&a[i][j]);
}
}
for(k=0,j=1;j<=p;j++)
{
printf("\tprod%d",j);
}
for(i=1;i<=s;i++)
{
sum=0;
printf("\n");
printf("salesman%d# ",i);
for(j=1;j<=p;j++)
{
printf(" %d\t  ",a[i][j]);
sum=sum+a[i][j];
a[i][p+1]=sum;
}
printf("%d \n",a[i][p+1]);
}
printf("total:=--------------------------------------------------");
printf("\n");
for(j=1;j<=p+1;j++)
{
sum=0;
for(i=1;i<=s+1;i++)
{
sum=sum+a[i][j];
}
printf("\t   %d",sum);
}
printf("\n          max");
for(j=1;j<=p;j++)
{
printf("\n product%d# ",j);
max=a[1][j];

for(i=2;i<=s;i++)
{ 
if(max<a[i][j])
{
sl=i;
max=a[i][j];
}
else
{
sl=i-2;
}
}
printf("%d   salesman%d",max,sl);
}
return 0;
}
