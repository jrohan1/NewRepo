// Assignment 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int getLength(char string[]);
int countVowels(char string[]);
char upperLetter(char c);

void main()

{
	char string[50];
	int len;
	int vowel;
	int upper;

	printf("Enter string:\n");
	gets_s(string);

	len = getLength(string);
	printf("Lenght of string = %d\n\n", len);

	vowel = countVowels(string);
		printf("Number of vowels = %d\n",vowel);

	upper = upperLetter(string);
	printf("In CAPITALS: %d\n\n", upper);
	
}
int getLength(char string[])
{
	int i = 0;


	for (i = 0; string[i] != '\0'; i++);

	return i;
}

int isVowel(char c)
{
	int i = 0;
	int vowel = 0;

	if (c == 105 || c == 101 || c == 97 || c == 111 || c == 117 || c == 73 || c == 69 || c == 64 || c == 79 || c == 95)
	{
		vowel ++;
	}
	return vowel;
}
int countVowels(char string[])
{
	int i = 0;
	int s = 0;
	int count = 0;
	int vowel = 0;
	int len = getLength(string);
	for (i = 0; i < len; i++)
	{
		s = string[i];
		count = isVowel(s);
		if (count == 1)
		{
			vowel ++;
		}
	}
	return vowel;
}
char upperLetter(char c)

{
	int len = getLength(string);
	int i = 0;
	int count = 0;
	int upper;

	for (i = 0; i < len; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = string[i] - 32;
			count++;
	}
		return upper;
}
