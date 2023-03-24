#include<stdio.h>
main() 
{
    int n,a=0;

    printf("Enter a number-> ");
    scanf("%d",&n);

    for(n,a;a<=n;a++)
    {
    	if(a%2!=0)
    	{
    	printf("%d\n",a);
	    }
    }
 }
