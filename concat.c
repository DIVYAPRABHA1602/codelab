#include <stdio.h>
char concat(char str[],char str1[]);
int stringlen(char str[]);
int main(void) 
{ 
    char str[100]="hello World";
    char str1[100]="welcome";
     concat(str,str1);
	printf("%s",str);
	return 0;
}
char concat(char str[],char str1[])
{   
    int ctr,ctr1,count,len,len1,length;
	len=stringlen(str);
	len1=stringlen(str1);
	length=len+len1;
	str[len]=' ';
	for(ctr1=len+1,count=0;ctr1<=length;ctr1++,count++)
    {
	  
	  str[ctr1]=str1[count];  
	}
	
    return str;
    
}
int stringlen(char str[])
{   int ctr;
    for(ctr=0;str[ctr]!='\0';ctr++);
    return ctr;
    }
