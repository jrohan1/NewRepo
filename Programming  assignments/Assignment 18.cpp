// Assignment 18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"

typedef struct
{
	char firstName[50];
	char lastName[50];
	long id;
	char english, french, maths, philosophy;
} result;

// array of pointers to 'result' structures - assuming that there is 100 or less records in the data file
result *results[100];

// number of records read from the file
int numResults = 0;

// read file and populate the results
// you will need to use malloc to allocate a new 'result' structure for each record read from the file
// the *result pointer returned by malloc will be stored in the next member of the array *results[]
int readFile(char *fileName);

// set all the pointers in *results[] to NULL before reading in the file
void initialiseResults();

// function to print an individual member of the *results[] array
void printResult(result *aResult);

int main()
{
	char fileName[] = "F:\\results18.txt";
	int i = 0;


	void initialiseResults();

	if (!readFile(fileName))
	{
		printf("File could not be opened !!\n");
		return 0;
	}
	printf("Surname\t      First Name\t ID    Math  English  French  Philosophy\n");
	printf("=======\t      ==========\t ==    ====  =======  ======  ==========\n");

	while (results[i] != NULL)
	{
		printResult(results[i]);
		i++;
	}

	return 0;
}

void printResult(result *aResult)
{
	printf("%-10s\t%-10s\t%-5d\t%c\t%c\t%c\t%c\n", aResult->lastName, aResult->firstName, aResult->id, aResult->maths, aResult->english, aResult->french, aResult->philosophy);
}

void initialiseResults()
{
	for (int i = 0; i < numResults; i++)
	{
		free(results[i]);
		results[i] = NULL;
	}
}

int readFile(char *fileName)
{
	FILE *fptr = fopen(fileName, "r");

	int i;
	char line[100];

	fgets(line, 100, fptr);

	i = 0;

	while (!feof(fptr))
	{
		results[i] = (result*)malloc(sizeof *results[i]);

		fscanf(fptr, "%d\t%s\t%s\t%c\t%c\t%c\t%c\n", &results[i]->id, results[i]->firstName, results[i]->lastName, &results[i]->english, &results[i]->maths, &results[i]->french, &results[i]->philosophy);

		numResults++;
		i++;
	}

	return 1;
}
