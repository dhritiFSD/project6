#include<stdio.h>
int main()
{
	int a1,a2,a3;
	printf("Enter angle1:");
	scanf("%d",&a1);
	printf("Enter angle2:");
	scanf("%d",&a2);
	a3=180-(a1+a2);
	if(a3>0)
	{
		printf("third angle of triangle is : %d dgree\n",a3);
	}
	else
	{
		printf("invalid angle");
	}
}
