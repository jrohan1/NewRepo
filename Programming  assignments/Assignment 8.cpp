// Assignment 8.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lowest(int nums[], int len);
int highest(int nums[], int len);
double average(int nums[], int len);
int numPassed(int nums[], int len);
int numFailed(int nums[], int len);

void main()
{
	int arr[10] = { 5, 25, 45, 66, 77, 34, 90, 22, 68, 84 };
	int low, high;
	double avg;
	int numFails, numPasses;
	int i = 0;
	int len = 10;
	int count = 0;
	int count2 = 0;

	printf("Here are your scores:\n");
	for (i = 0; i < len; i++)
	{

		printf("%d,", arr[i]);
	}
	printf("\n");
	low = lowest(arr, len);
	printf("Lowest = %d", low);
	printf("\n");

	high = highest(arr, len);
	printf("Highest = %d", high);
	printf("\n");

	
	avg = average(arr,len);
	printf("Average = %.2f", avg);
	printf("\n");

	count = numPassed(arr, len);
	count2 = numFailed(arr, len);
	printf("There were %d Passes and %d Fails", count,count2);
	printf("\n");
}

int lowest(int nums[], int len)
{
	int min = nums[0];
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (nums[i] <= min)
			min = nums[i];

	}
	return min;

}
int highest(int nums[], int len)
{
	int j = 0;
	int max = nums[0];
	for (j = 0; j < len; j++)
	{
		if (nums[j] >= max)
			max = nums[j];
	}
	return max;
}
double average(int nums[], int len)
{
	int i = 0;
	double sum = 0;
	double avg = 0;
	for (i = 0; i < len; i++)
	{
		sum = sum + nums[i];
		avg = sum / len;
	}
	return avg;
}
int numPassed(int nums[], int len)
{
	int i = 0;
	int count = 0;

	for (i = 0; i < len; i++)
	{
		if (nums[i] >= 40)
			count = count + 1;
		

	}
	return count;
	

}
int numFailed(int nums[], int len)
{
	int i = 0;
	int count2 = 0;

	for (i = 0; i < len; i++)
	{
		if (nums[i] < 40)
			count2 = count2 + 1;
		

	}
	return count2;
}