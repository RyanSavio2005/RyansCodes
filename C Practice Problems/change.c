#include <stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
	    int x;
	    scanf("%d",&x);
	    int a=x/5;
	    int b=x%5;
	    if(a%2==0 && b!=0)
	    {
	        x=a*5;
	    }
	    else if(a%2!=0)
	    {
	        x=(a+1)*5;
	    }
	    printf("%d\n",100-x);
	}
	return 0;
}
