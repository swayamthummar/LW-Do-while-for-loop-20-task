#include<stdio.h>
main()
{
	int a=1,n,ans;
	
	printf("Enter a value of N->");
	scanf("%d",&n);
	
	do
	{
	  ans=ans+a;
	  a++;	
	}while(a<=n);
	
	printf("answer ->%d",ans);
}
