// week 4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <stdio.h>

#define TRIANGLE 1
#define SQUARE 2
#define RECTANGLE 3
#define PARALLELOGRAM 4
#define TRAPEZIUM 5
#define CIRCLE 6
#define ELIPSE 7
#define SECTOR 8

void main()

{

	int shape = 0;
	float b = 0;
	float h = 0;
	float area1 = 0;
	float l = 0;
	float area2 = 0;
	float w = 0;
	float area3 = 0;
	float area4 = 0;
	float la = 0;
	float lb = 0;
	float area5 = 0;
	float r = 0;
	float area6 = 0;
	float majorr = 0;
	float minorr = 0;
	float area7 = 0;
	float angle = 0;
	float area8 = 0;
	float another = 0;
	shape = ((float)TRIANGLE == 1,(float)SQUARE == 2);

	printf("Area Calculator\n");
	printf("Enter Choice:\n");
	printf("1 <TRIANGLE>\n");
	printf("2 <SQUARE>\n");
	printf("3 <RECTANGLE>\n");
	printf("4 <PARALLELOGRAM>\n");
	printf("5 <TRAPEZIUM>\n");
	printf("6 <CIRCLE>\n");
	printf("7 <ELIPSE>\n");
	printf("8 <SECTOR>\nChoice: ");
	scanf_s("%d",&shape);

	switch (shape)
	{
	case 1:
		printf("Enter base width: ");
		scanf_s("%f", &b);

		printf("Enter height: ");
		scanf_s("%f", &h);

		area1 = ((b*0.5)*h);
		printf("Area = %.2f\n", area1);
		break;

	case 2:
		printf("Enter lenght of side: ");
		scanf_s("%f", &l);

		area2 = (l*l);
		printf("Area = %.2f\n", area2);
		break;

	case 3:
		printf("Enter width: ");
		scanf_s("%f", &w);
		printf("Enter height: ");
		scanf_s("%f", &h);

		area3 = (w*h);
		printf("Area = %.2f\n", area3);
		break;

	case 4:
		printf("Enter base width: ");
		scanf_s("%f", &b);
		printf("Enter height: ");
		scanf_s("%f", &h);

		area4 = (b*h);
		printf("Area = %.2f\n", area4);
		break;

	case 5:
		printf("Enter lenght of side a : ");
		scanf_s("%f", &la);
		printf("Enter lenght of side b: ");
		scanf_s("%f", &lb);
		printf("Enter vertical height: ");
		scanf_s("%f", &h);

		area5 = (0.5*(la + lb)*h);
		printf("Area = %.2f\n", area5);
		break;

	case 6:
		printf("Enter radius: ");
		scanf_s("%f", &r);

		area6 = (0.314*(r*r));
		printf("Area = %.2f\n", area6);
		break;

	case 7:
		printf("Enter major radius : ");
		scanf_s("%f", &majorr);
		printf("Enter minor radius: ");
		scanf_s("%f", &minorr);

		area7 = (0.314*majorr*minorr);
		printf("Area = %.2f\n", area7);
		break;

	case 8:
		printf("Enter radius : ");
		scanf_s("%f", &r);
		printf("Enter angle in radians: ");
		scanf_s("%f", &angle);

		area8 = ((0.5)*(r*r)*angle);
		printf("Area = %.2f\n", area8);
		break;



	default:

		break;
		
	}
	
}