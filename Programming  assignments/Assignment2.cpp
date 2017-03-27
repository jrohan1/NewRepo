// Assignment2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

void main()
{
	int english, maths, french, irish, science;
	float avg;
	float subjects;
	int highestMark = 0;
	int highestSubject;


	printf("Enter English Mark:");
	scanf_s("%d", &english);

	printf("Enter French Mark:");
	scanf_s("%d", &french);

	printf("Enter Maths Mark:");
	scanf_s("%d", &maths);

	printf("Enter Irish Mark:");
	scanf_s("%d", &irish);

	printf("Enter Science Mark:");
	scanf_s("%d", &science);

	printf("\n");

	avg = (english + french + maths + irish + science) / 5;
	{
		printf("Average Mark = %.2f\n", avg); 
	}
	
	printf("Fails: ");
	if (english < 40) printf("English,");
	if (french < 40) printf(" French,");
	if (maths < 40) printf(" Maths,");
	if (irish < 40) printf(" Irish,");
	if (science < 40) printf(" Science,");
	printf("\n");

	printf("Passes: ");
	if (english > 40) printf("English,");
	if (french > 40) printf(" French,");
	if (maths > 40) printf(" Maths,");
	if (irish > 40) printf(" Irish,");
	if (science > 40) printf(" Science");
	printf("\n");

	if (english > highestMark)
	{
		highestMark = english;
		highestSubject = 1;
	}
	if (french > highestMark)
	{
		highestMark = french;
		highestSubject = 2;
	}
	if (maths > highestMark)
	{
		highestMark = maths;
		highestSubject = 3;
	}
	if (irish > highestMark)
	{
		highestMark = irish;
		highestSubject = 4;
	}
	if (science > highestMark)
	{
		highestMark = science;
		highestSubject = 5;
	}

	if (highestSubject == 1)
		printf("Highest Mark = %d in English",highestMark);

	if (highestSubject == 2)
		printf("Highest Mark = %d in French", highestMark);
	
	if (highestSubject == 3)
		printf("Highest Mark = %d in Maths", highestMark);

	if (highestSubject == 4)
		printf("Highest Mark = %d in Irish", highestMark);

	if (highestSubject == 5)
		printf("Highest Mark = %d in Science", highestMark);
	
	printf("\n");
	
	
}