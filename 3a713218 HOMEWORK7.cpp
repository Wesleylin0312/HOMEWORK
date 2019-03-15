#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	int t=0,sum=0,r=0;
	printf("½Ð¿é¤JN:");
	scanf("%d",&r);
	for(t=0;t<=r;t++){
	sum+=t;
	}
	printf("1+2+...+%d=%d",r,sum);
	system("pause");
	return 0;
}
