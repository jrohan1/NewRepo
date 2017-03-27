// Assignment 16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define NUM 40

struct familyIncome
{
	char state[40];
	int income2003;
	int income2004;
	int income2005;
};

struct familyIncome states[100];

void readFile();
void printLowestAllYears(); // outputs state with lowest income in all 3 years
void printHighestAllYears(); // outputs state with highest income in all 3 years
void printLowestYear2003();
void printLowestYear2004(); // outputs state with lowest income in specific year
void printLowestYear2005();
void printHighestYear2003();
void printHighestYear2004();
void printHighestYear2005();

void printIncome();

void main()
{
	printIncome();

}
void readFile()
{
	FILE *fp;
	char strBuff[100];
	char temp[100];
	char c;
	int i, j, len, numstates = 0;
	fp = fopen("F:\\familyIncome.txt", "r");
	fgets(strBuff, 80, fp); fgets(strBuff, 80, fp); fgets(strBuff, 80, fp);
	if (fp == NULL)
	{
		printf("Error opening file !\n");
	}

	fgets(strBuff, 100, fp);
	while (!feof(fp))
	{
		i = 0;
		j = 0;
		len = strlen(strBuff);

		while ((strBuff[i] != '\t') && (strBuff[i] != '\n'))
		{
			temp[j] = strBuff[i];
			j++;
			i++;
		}
		temp[j] = '\0';
		strcpy(states[numstates].state, temp);

		j = 0;
		i++;

	while ((strBuff[i] != '\t') && (strBuff[i] != '\n'))
		{
			temp[j] = strBuff[i];
			j++;
			i++;
		}
		temp[j] = '\0';
		states[numstates].income2003 = atoi(temp);

	j = 0;
	i++;

	while ((strBuff[i] != '\t') && (strBuff[i] != '\n'))
		{
		temp[j] = strBuff[i];
		j++;
		i++;
		}
	temp[j] = '\0';
	states[numstates].income2004 = atoi(temp);

	j = 0;
	i++;
	
	while ((strBuff[i] != '\t') && (strBuff[i] != '\n'))
	{
		temp[j] = strBuff[i];
		j++;
		i++;
	}
	temp[j] = '\0';
	states[numstates].income2005 = atoi(temp);

	numstates++;
	fgets(strBuff, 100, fp);
}
	fclose(fp);
}
void printLowestYear2003()
{
	int i, pass;
	struct familyIncome temp;

	for (pass = 1; pass < NUM; pass++)
	{

		for (i = 0; i < NUM - 1; i++)
		{


			if (states[i].income2003 > states[i + 1].income2003)
			{
				temp = states[i];
				states[i] = states[i + 1];
				states[i + 1] = temp;
			}
		}
	}

}
void printLowestYear2004()
{
	int i, pass;
	struct familyIncome temp;
	
	for (pass = 1; pass < NUM; pass++)
	{
		
		for (i = 0; i < NUM - 1; i++)
		{
		
		
			if (states[i].income2004 > states[i + 1].income2004)
			{
				temp = states[i];
				states[i] =states[i + 1];
				states[i + 1] = temp;
			}
		}
	}

}
void printLowestYear2005()
{
int i, pass;
struct familyIncome temp;

for (pass = 1; pass < NUM; pass++)
{

	for (i = 0; i < NUM - 1; i++)
	{


		if (states[i].income2005 > states[i + 1].income2005)
		{
			temp = states[i];
			states[i] = states[i + 1];
			states[i + 1] = temp;
		}
	}
}

}
void printLowestAllYears()
{
	int i;
	int lowest;
	if (states[i].income2003 < states[i].income2004)
	{
		lowest = states[i].income2003;
	}
	else
	{
		lowest = states[i].income2004;
	}

}
void printHighestYear2003()
{
	int i, pass;
	struct familyIncome temp;

	for (pass = 1; pass < NUM; pass++)
	{

		for (i = 0; i < NUM - 1; i++)
		{


			if (states[i].income2003 < states[i + 1].income2003)
			{
				temp = states[i];
				states[i] = states[i + 1];
				states[i + 1] = temp;
			}
		}
	}

}
void printHighestYear2004()
{
	int i, pass;
	struct familyIncome temp;

	for (pass = 1; pass < NUM; pass++)
	{

		for (i = 0; i < NUM - 1; i++)
		{


			if (states[i].income2004 < states[i + 1].income2004)
			{
				temp = states[i];
				states[i] = states[i + 1];
				states[i + 1] = temp;
			}
		}
	}

}
void printHighestYear2005()
{
	int i, pass;
	struct familyIncome temp;

	for (pass = 1; pass < NUM; pass++)
	{

		for (i = 0; i < NUM - 1; i++)
		{


			if (states[i].income2005 < states[i + 1].income2005)
			{
				temp = states[i];
				states[i] = states[i + 1];
				states[i + 1] = temp;
			}
		}
	}

}
void printIncome()
{
	int i;
	for (i = 0; i<NUM; i++)
	{
		printf("Lowest Median Income was $%d in %c in %d/n", &states[i].income2003,states[i].state,&states[i].year);
		printf("Highest Median Income was $%d in %c in %d / n", &states[i].income2003, states[i].state, &states[i].year);
		printf("Lowest Median Income in 2004 was %d/n", &states[i].income2004);
		printf("Highest Median Income in 2004 was %d / n", &states[i].income2004);
	}
}
