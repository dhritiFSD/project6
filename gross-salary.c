#include<stdio.h>
int main()
{
	float basic,h,d,gross;
	printf("Enterv basic salary :");
	scanf("%f",&basic);
	h=0.20*basic;
	d=0.10*basic;
	gross=basic+h+d;
	printf("HRA = %.2f\n",h);
	printf("DA = %.2f\n",d);
	printf("Gross salary = %.2f\n",gross);
}
