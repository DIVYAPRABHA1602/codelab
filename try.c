#include <stdio.h>
int match(int max);
int main(void) 
{
    int a[6]={8,4,1,9,6,2},i,j,temp,max1;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            max1=a[i]+1;
            temp=match(max1);
            printf("%d-->%d",a[i],temp);
        }
    }
    return 0;
}
int match(int max)
{
    int k,b[6]={8,4,1,9,6,2};
    for(k=0;k<6;k++)
    {
        if(b[k]==max)
        {
            return max;
        }
        max++;
    }// your code goes here
}

