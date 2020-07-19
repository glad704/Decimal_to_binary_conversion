/************************************************************************
 * FILE		: Decimal_to_binary_conversion().c
 * DESCRIPTION	: Program to convert decimal number to binary number using recursion.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 18/07/2020
 * *********************************************************************/

#include<stdio.h>

long convertBinary(int);

int main()
{
	long biNo;
	int decNo;
	printf("\n\nRecursion : Convert decimal number to binary :\n");
	printf("--------------------------------------------------\n");
	printf("Input any decimal number : ");
	scanf("%d",&decNo);
	
	biNo = convertBinary(decNo);
	printf("The Binary value of decimal no. %d is : %ld\n\n",decNo,biNo);
	return 0;
}

long convertBinary(int decNo)
{
	static long biNo,r,fctor = 1;
	printf("value of biNo: %ld\nvalue of r: %ld\nvalue of fctor: %ld\n",biNo,r,fctor);
	if(decNo!=0)
	{
		r = decNo%2;
		biNo = biNo + r * fctor;
		fctor = fctor * 10;
		convertBinary(decNo/2);
	}
	return biNo;
}
