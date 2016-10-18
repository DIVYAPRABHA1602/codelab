#include <stdio.h>
int stringlen(char str[]);
int main(void)
{
	char str[100]="this is a test sentence";
	reverse(str);
	printf("%s",str);
	return 0;
}
int stringlen(char str[])
{   int ctr;
    for(ctr=0;str[ctr]!='\0';ctr++);
    return ctr;
    
}
int reverse(char str[])
{
    char temp;
	int ctr,len;
	len=stringlen(str);
	for(ctr=0;ctr<=(len+ctr)/2;ctr++,len--)
	{
	    temp=str[len-1];
	    str[len-1]=str[ctr];
	    str[ctr]=temp;
	}
	return str;
}
