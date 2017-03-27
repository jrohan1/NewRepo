// Assignment 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void printString(char *string);
void sortString(char *string);
int getStringLength(char *string);

void main()
{
	char str1[] = "bcGpsWoNaTbFnoZzwX";

	printString("Unsorted String:");
	printString(str1);
	printString("\n");
	sortString(str1);
	printString("Sorted String:");
	printString(str1);
	printString("\n");
}

int getStringLength(char *string)
{
	int i = 0, len = 0;

	for (i = 0; *(string + i) != '\0'; i++)
	{

		len++;
	}

	return len;
}

void printString(char *string)
{
	int i = 0;
	int len = getStringLength(string);
	char c = 0;

	for (i = 0; i < len; i++)
	{
		c = *(string + i);
		putchar(c);
	}

}
void sortString(char *string)
{
	int i, j;
	int len = getStringLength(string);
	int temp;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			if (*(string + j) > *(string + j + 1))
			{
				temp = *(string + j);
				*(string + j) = *(string + j + 1);
				*(string + j + 1) = temp;
			}
		}
	}
}
