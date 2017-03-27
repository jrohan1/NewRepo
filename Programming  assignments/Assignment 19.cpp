// Assignment 19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"

//typedef struct contact details;
struct contact
{
	char userName[100];
	char firstName[100];
	char lastName[100];
	char displayName[100];
	char jobTitle[100];
	char department[100];
	float officeNum;
	char officePhone[100];
	char mobNum[100];
	char faxNum[100];
	char address[100];
	char city[100];
	char state[100];
	float zip;
	char region[100];
	contact *next;
};
contact *contacts[50];
int numContacts;
int readFile(char *fileName);
void printContact(contact *aContact);

void main()
{
	char fileName[] = "F:\\contacts.txt";
	int i = 0;

	if (!readFile(fileName))
	{
		printf("File could not be opened \n");
		return;
	}
	while (contacts[i] != NULL)
	{
		printContact(contacts[i]);
		i++;
	}
	
}
int readFile(char *fileName)
{
	FILE *ptr;
	char*token;
	char delim[] = ",";
	char line[300];
	ptr = fopen(fileName, "r");
	int i = 0;
	fgets(line, 300, ptr);
	while (!feof(ptr))
	{
		fgets(line, 300, ptr);
		contacts[i] = (struct contact*)malloc(sizeof(struct contact));

		token = strtok(line, delim);
		strcpy(contacts[numContacts]->userName, token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->firstName, token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->lastName, token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->displayName, token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->jobTitle, token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->department, token);

		token = strtok(NULL, delim);
		contacts[numContacts]->officeNum = atof(token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->officePhone, token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->mobNum, token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->faxNum, token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->address, token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->city, token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->state, token);

		token = strtok(NULL, delim);
		contacts[numContacts]->zip = atof(token);

		token = strtok(NULL, delim);
		strcpy(contacts[numContacts]->region, token);
		numContacts++;
		i++;
	}
	fclose(ptr);

	return 1;
}
void printContact(contact *aContact)
{
	printf("User Name: %s\nFirst Name: %s\nLast Name: %s\nDisplay Name: %s\nJob Title: %s\nDepartment: %s\nOffice Number: %g\nOffice Phone: %s\nMobile Phone: %s\nFax: %s\nAddress: %s\nCity: %s\nState:%s \nZIP:%g\nCountry or Region: %s\n",aContact->userName, aContact->firstName, aContact->lastName, aContact->displayName, aContact->jobTitle, aContact->department, aContact->officeNum, aContact->officePhone, aContact->mobNum, aContact->faxNum, aContact->address, aContact->city, aContact->state, aContact->zip, aContact->region);
}