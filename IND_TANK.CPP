//ind_tank.cpp

#include<conio.h>
#include<stdio.h>
#include<math.h>
	void main()
	{
	float c,l;
	float f;
   printf("\n");
	printf("Finding the inductance of tank circuit");
	printf("\n");
	printf("\nEnter the value of frequency in mega hertz:");
	scanf("%f",&f);
	printf("\nEnter the value of capacitance in micro farad:");
	scanf("%f",&c);
	l=1/(4*3.14*3.14*c*1e-6*f*f);
	printf("\nInductance of tank circuit is:%f micro henry\n\n",l);
	}

