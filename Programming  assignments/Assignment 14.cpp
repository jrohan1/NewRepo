// Assignment 14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <time.h>
#include "stdlib.h"

FILE *fptr;

int openFile();
void closeFile();
void newFile();

int openFile(char* mode)
{
	fptr = fopen("F:\\numbers.txt", mode);
	if (fptr == NULL)
	{
		printf("Error in opening file \n");
		return 0;
	}
	else
	{
		return 1;
	}
}

void closeFile()
{
	fclose(fptr);
}

void main()
{
	double balance[100];
	int account[100];
	int openOK = 0;
	int i = 0;

	openOK = openFile("r");
	if (openOK)
	{
		while (!feof(fptr))
		{
			fscanf(fptr, "%d%lf", &account[i], &balance[i]);
			printf("%.5d\t%.2lf\n", account[i], balance[i]);
			i++;
		}
	}
	void newFile()
	{
		srand(time(NULL));
		openOK = openFile("w");
		int j = 0;

		if (openOK)
		{
			for (i = 0; i <= 100; i++)
			{
				for (j = 0; j = rand() % 50 - 100; j++)
					account[i] = i;
				balance[j] = j;
			}
		}
		while (!feof(fptr))
		{
			fscanf(fptr, "%d%lf", &account[i], &balance[j]);
			printf("%.5d\t%.2lf\n", account[i], balance[j]);
			i++;
			j++;
		}
	}


