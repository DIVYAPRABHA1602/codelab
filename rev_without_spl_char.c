#include <stdio.h>
#include<string.h>
int reverse(char str[]);
int stringlen(char str[]);

int main(void) {
	char str[]="!this,is,new:";
	char copy[strlen(str)];
	strcpy(copy,str);
	reverse(copy);
	printf("%s",copy);
	
	return 0;
}
int reverse(char str[])
{
    char temp;
	int ctr,len;
	len=stringlen(str);
	for(ctr=0;ctr<=(len+ctr)/2;ctr++,len--)
	{
	    if((str[ctr]>='a'&&str[ctr]<='z')&&(str[len]>='a'&&str[len]<='z'))
	    {
	        temp=str[len];
	        str[len]=str[ctr];
	        str[ctr]=temp;
	    }
	}
	     
	return str;
}
int stringlen(char str[])
{   int ctr;
    for(ctr=0;str[ctr]!='\0';ctr++);
    return ctr;
    
