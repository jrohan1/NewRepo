// Assignment 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
int i = 0;
int j = 0;
void main()
{
	char names[10][51] = { "Melvin Peters", 
		"Drew French", "Inez West", "Grant Holmes", "Carmen Zimmerman", "Teresa Diaz", "Marvin Buchanan", "Glenn Montgomery", "Ed Aguilar", "Mathew Jefferson" };
	char firstNames[10][51];
	char surnames[10][51];
	printf("First Names:\n ");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 51; j++)
		{
			if (names[i][j] == ' ')
				break;
			firstNames[i][j] = names[i][j];
		}

		firstNames[i][j] = '\0';
		printf("%s \n", firstNames[i]);
	}
	int k = 0;
	printf("\nSurnames:\n");
	int start = 0;
	
	for (i = 0; i < 10; i++)
	{
		k = 0;
		start = 0;
		for (j = 0; names[i][j] != '\0'; j++)
		{
			if (names[i][j] == ' ')
			{
				start = 1;
				continue;
			}
			if (start == 1)
			{
				surnames[i][k] = names[i][j];
				k++;
			}
		}
		surnames[i][k] = '\0';
		printf("%s\n", surnames[i]);

	}
	printf("\n\nNew Names:\n");

	int x = 0;
	int y = 9;

	for (i = 0; i < 10; i++)
	{
		printf("%s %s\n", firstNames[x], surnames[y]);
		x++;
		y--;

	}
}