#include <stdio.h>
#include<conio.h>
int main(void) 
{
	char a[20];
	scanf("%s",a);
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
