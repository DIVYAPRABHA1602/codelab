#include <stdio.h>

int main(void) 
{ 
    char str[100]="hello World";
    int len=stringlen(str);
	printf("%d",len);
	return 0;
}
int stringlen(char str[])
{   int ctr;
    for(ctr=0;str[ctr]!='\0';ctr++);
    return ctr;
    
}
