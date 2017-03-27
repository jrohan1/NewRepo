// Assignment 5b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void main()
{
	int age = 0;
	float average;
	int min = 0;
	int max = 0;
	int exit = 0;
	int ages[10];
	int input = 0;
	int sum = 0;
	int numAges;

	printf("Program to calculate average of up to 10 ages\n");

	printf("How many ages do you want to enter? %d", numAges);

	for (input = 1; input < 10; input++)
	{
		printf("#%d:\t",input);

		scanf_s("%d", &ages[input]);

		if (ages[input] != -1)
		{
			sum = sum + ages[input];
			input = input + 1;
		}
		else
		{
			break;
		}
	} while (input <10);

	average = sum / input;
	printf("Average:  %.2f\n", average);

	int j = 0;
	min = ages[0];
	max = ages[0];
	while (j<input)
	{
		if (ages[j] < min)
			min = ages[j];
		j++;
	}

	while (j<input)
	{
		if (ages[j] > max)
			max = ages[j];
		j++;
	}
	printf("Min: %d\n", min);
	printf("Max: %d\n", max);

}


