//cap_tank.cpp

#include<conio.h>
#include<stdio.h>
#include<math.h>
	void main()
	{
	float c,l;
	float f;
	printf("\nFinding the capacitance of tank circuit\n");
	printf("\nEnter the value of frequency in mega hertz:");
	scanf("%f",&f);
	printf("\nEnter the value of inductance in micro henries:");
	scanf("%f",&l);
	c=1/(4*3.14*3.14*l*1e-6*f*f);
	printf("\nCapacitance of tank circuit is:%f pico farad\n\n",c);
	}

