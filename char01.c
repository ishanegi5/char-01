#include<stdio.h>

#define MAX 10

void main()

{ char a[MAX]= {'a','d','f'};

for(int j=0;j<MAX;j++)
{
    printf("Enter %d char: ",j+1);
  
scanf(" %c",&a[j]);

}
   
   
for(int i=0;i<MAX;i++)
 {
       printf("%d. %c\n",i+1,a[i]);
  
 }

}