// Assignment 22.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
struct firstline{

};
struct athletes{
	char first_Name[20];
	int age;
	char country[20];
	int year;
	char sport[20];
	int gold;
	int silver;
	int bronze;
	int total;
	struct athletes *next;
};
void find_method(int searchyear, char searchsport[]);
void readData();
struct athletes *first;
int main()
{
	int searchyear;
	char searchsport[20];
	readData();
	printf("please enter year and sport you would like to search:");
	scanf("%d %s", &searchyear, &searchsport);
	find_method(searchyear, searchsport);
}



void readData(){
	struct athletes *current = NULL;
	struct athletes *last = NULL;
	char *token;
	char str[100];
	char delim[] = "\t";
	FILE *fptr;

	fptr = fopen("F:\\athletes.txt", "r");
	while (!feof(fptr)){
		fgets(str, 100, fptr);
		if (first == NULL)
		{
			first = (struct athletes *)malloc(sizeof(struct athletes));
			first->next = NULL;
			current = first;
		}
		else
		{
			last = (struct athletes *)malloc(sizeof(struct athletes));
			current->next = last;
			current = last;
			current->next = NULL;
		}
		if ((token = strtok(str, delim)) != NULL) strcpy(current->first_Name, token);
		if ((token = strtok(NULL, delim)) != NULL) (current->age = atoi(token));
		if ((token = strtok(NULL, delim)) != NULL) strcpy(current->country, token);
		if ((token = strtok(NULL, delim)) != NULL) (current->year = atoi(token));
		if ((token = strtok(NULL, delim)) != NULL) strcpy(current->sport, token);
		if ((token = strtok(NULL, delim)) != NULL) (current->gold = atoi(token));
		if ((token = strtok(NULL, delim)) != NULL) (current->silver = atoi(token));
		if ((token = strtok(NULL, delim)) != NULL) (current->bronze = atoi(token));
		if ((token = strtok(NULL, delim)) != NULL) (current->total = atoi(token));

		//fgets(str, 100, fptr);
	}
	fclose(fptr);
}


void find_method(int searchyear, char searchsport[]){
	struct athletes *current;

	current = first;

	while (current != NULL)
	{
		if ((current->year == searchyear) && (!strcmp(current->sport, searchsport)))
		{
			printf("%s\t%d\t%s\t%d\t%s\t%d\t%d\t%d\t%d\t", current->first_Name, current->age, current->country, current->year, current->sport, current->gold, current->silver, current->bronze, current->total);

		}
		current = current->next;
	}

}
