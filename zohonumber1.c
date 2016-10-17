#include <stdio.h>

int main(void) {
    
    int a[6]={8,4,1,9,6,2},i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(a[i]<a[j] && a[j]>=a[i]+1)
            {
                
                printf("%d -->%d\t",a[i],a[j]);
            }
        }
    }
	// your code goes here
	return 0;
}
