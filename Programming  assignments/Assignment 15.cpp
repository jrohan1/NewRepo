// Assignment 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

FILE *openFile(char *fileName, char *mode);
void closeFile(FILE *fptr);
int readData(FILE *fptr);
void addData(FILE *fptr);

struct student
{
	int ID;
	char subject[10];
	int mark;
	char grade;
};

void printResults(struct result resultX);
struct student results[4];

void main(void)
{

	FILE *fptr;
	char fileName[] = "F:\\results.txt";

	fptr = openFile(fileName, "r");
	int studentsCount = readData(fptr);
	closeFile(fptr);

	for (int i = 0; i< studentsCount; i++)
	{
		
	printf("%d\t%s\t%d\t%c\n", results[i].ID, results[i].subject, results[i].mark, results[i].grade);
	}

	fptr = fopen("F:\\updatedResults.txt","w");
	
	for (int i = 0; i< studentsCount; i++)
	{
		results[i].mark = results[i].mark + (results[i].mark*0.1);
				
	}
	for (int i = 0; i < studentsCount; i++)
	{
		if (results[i].mark < 40)
		{
			results[i].grade = 'F';
		}
		if (results[i].mark >= 40 && results[i].mark < 50)
		{
			results[i].grade = 'D';
		}
		if (results[i].mark > 51 && results[i].mark < 60)
		{
			results[i].grade = 'C';
		}
		if (results[i].mark > 61 && results[i].mark < 70)
		{
			results[i].grade = 'B';
		}
		if (results[i].mark >= 71)
		{
			results[i].grade = 'A';
		}

	}
	printf("\n");

	for (int i = 0; i < studentsCount; i++)
	{
		printf("%d\t%s\t%d\t%c\n", results[i].ID, results[i].subject, results[i].mark, results[i].grade);
	}
	closeFile(fptr);
}
int readData(FILE *fptr)
{
	int i = 0;
	while (!feof(fptr))
	{
		fscanf(fptr, "%d\t%s\t%d\t%c\n", &results[i].ID, results[i].subject, &results[i].mark, &results[i].grade);
		i++;
	}
	return i;

}



FILE * openFile(char *fileName, char *mode)
{

	FILE *fptr = fopen(fileName, mode);

	if (fptr == NULL)
	{
		printf("Error opening file ! \n");
	}

	return fptr;
}

void closeFile(FILE *fptr)
{
	fclose(fptr);
}

