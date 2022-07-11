//zener_re.cpp
#include<conio.h>
#include<stdio.h>
#include<math.h>
	void main()
	{
	float vi,vz,i;
	float rs,ps,iz;
	printf("\nFinding the value of series resistance in zener regulator");
	printf("\nEnter the value of input voltage in volts:");
	scanf("%f",&vi);
	printf("\nEnter the value of zener voltage in volts:");
	scanf("%f",&vz);
	printf("\nEnter the value of total current i in milliampere:");
   scanf("%f",&i);
	rs=(vi-vz)/i;
	printf("\nValue of series resistance is:%f kilo ohms",rs);
	ps=i*i*rs;
	printf("\n\nPower desipated across series resistance is:%f in mWatts",ps);
	iz=0.5/vz;
	printf("\n\nMaximum zener current is:%f in Ampere\n\n",iz);
	}

