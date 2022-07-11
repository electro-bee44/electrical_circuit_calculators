//freg_tank.cpp

#include<conio.h>
#include<stdio.h>
#include<math.h>
	void main()
	{
	float c,l;
	float f;
	printf("\nFinding the Frequency of tank circuit\n");
	printf("\nEnter the value of capacitance in micro farad:");
	scanf("%f",&c);
	printf("\nEnter the value of inductance in micro henries:");
	scanf("%f",&l);
	f=1/(2*3.14*sqrt(l*1e-6*c*1e-12))/(1e6);
	printf("\nFrequency of tank circuit is:%f mega hertz\n\n",f);
	}

