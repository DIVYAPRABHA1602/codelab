#include <stdio.h>

int main(void) 
{
   int arr[9]={8,4,1,9,6,7,2,2,2},input[9]={8,4,1,9,6,7,2,6,2};
   int ctr,temp,scope,ctr1;
   for(ctr=0;ctr< sizeof(arr)/sizeof(arr[0]);ctr++)
   {
      for(scope=0;scope<sizeof(arr)/sizeof(arr[0]);scope++)
      {
         if(arr[scope]>arr[ctr])
         {
            temp=arr[ctr];
            arr[ctr]=arr[scope];
            arr[scope]=temp;
         }
      }
   }
   for(ctr=0;ctr< sizeof(arr)/sizeof(arr[0])-1;ctr++)
   {
      if(arr[ctr]==arr[ctr+1])
      {
         //while(arr[ctr]==arr[ctr+1])
         ctr++;
         printf("%d->%d\n",arr[ctr-1],arr[ctr+1]);
      }
      
      printf("%d->%d\n",arr[ctr],arr[ctr+1]);
   }
   
   /*for(ctr=0;ctr< sizeof(arr)/sizeof(arr[0]);ctr++)
   {
      printf("%d\t",arr[ctr]);
   }
   else if(arr[ctr]==arr[sizeof(arr)/sizeof(arr[0])-1])
      printf("%d->\n",arr[ctr]);
      else
*/
	return 0;
}
