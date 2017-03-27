// Assignment 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "time.h"
#include "stdlib.h"

// number of dice to throw at a time
#define SIZE 3

// throw a single die
int throwDie();

// checks dice against your prediction - returns number of matches
int checkThrow(int nums[], int dice[], int len);

// sorts an integer array
void sortArray(int array[], int len);

// prints an array of integers
void printDice(int dice[], int len);

int main()
{
	// your array of dice (integers 1-6_
	int dice[SIZE];

	// the numbers you want to throw
	int nums[SIZE];

	// number of throws
	int nThrows = 0;

	int i;

	// number of matches returned by checkThrow
	int nMatch = 0;

	// seed random number generator
	srand(time(0));

	puts("Enter the numbers you want to throw:");
	for (i = 0; i<SIZE; i++)
	{
		printf("#%d: ", i);
		scanf_s("%d", &nums[i]);
	}
	sortArray(nums, SIZE);

	do
	{
		for (i = 0; i<SIZE; i++)
		{
			dice[i] = throwDie();
		}
		sortArray(dice, SIZE);
		printDice(dice, SIZE);

		nMatch = checkThrow(nums, dice, SIZE);
		nThrows++;
	} while (nMatch < SIZE);

	printf("Succeeded in %d throws \n", nThrows);
}

// throw a single die
// returns a random integer between 1 and 6
int throwDie()
{
	int die;
	die = rand() % 6 + 1;
	return die;
}

// checks dice against your prediction - returns number of matches
// they should be already sorted in ascending order, so this makes it easier
int checkThrow(int nums[], int dice[], int len)
{
	int i;
	int count = 0;
	for (i = 0; i < len; i++)
	{
		if (nums[i] == dice[i])
			count++;
	}
	return count;


}

// sorts an integer array using bubble sort
void sortArray(int array[], int len)
{
	int i, j, temp;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - 1; j++)

			if (array[j] > array[j + 1])
			{
				temp = array[i];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
	}
}

// prints an array of integers as per the sample output
void printDice(int dice[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", dice[i]);
	}

	printf("\n");

	return;
}

