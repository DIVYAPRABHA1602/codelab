#include <stdio.h>

int main(void) {
    
    int a[6]={8,2,1,2,6,2},i,j,temp,b[6]={8,4,1,9,6,2};
    for(i=0;i<=6-2;i++)
    {
        for(j=i;j<=6-1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<6;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<6;i++)
    {
        if(a[i]!=a[i+1])
        {
            printf("%d-->%d\n",a[i],a[i+1]);
        }
        else
        {
            printf("%d-->%d\n",a[i],a[i+2]);
        }
    }
	// your code goes here
	return 0;
}

