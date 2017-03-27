// Assignment 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double getBalance();
int getMonth();
int getDay(int month);
int getYear();

struct date
{
	int day, month, year;
};
struct customer
{
	char name[50];
	int accountNumber;
	double balance;
	struct date lastTrans;
};

void main()
{
	struct customer customers[10];

	char name[10][50] = { "Shyla Camacho", "Nathan Beck", "Jadyn Jones", "Judith Hines", "Preston Avery", "Stephanie Best", "Chanel Serrano", "Royce Roy", "Ainsley Espinoza", "Cora Strong" };
	int accountNumber = 10000;
	srand(time(NULL));
	struct date lastTrans;
	int month = getMonth();

	for (int i = 0; i < 10; i++)
	{
		strcpy_s(customers[i].name, name[i]);
		customers[i].accountNumber = accountNumber;
		customers[i].balance = getBalance();
		accountNumber++;
		customers[i].lastTrans.day = getDay(month);
		customers[i].lastTrans.month = getMonth();
		customers[i].lastTrans.year = getYear();
	}
	

}
double getBalance()
{
	int balance= rand() % 10000-5000;
	return balance;
}
int getMonth()
{

	int month = rand() % 12 + 1;
	return month;
}
int getDay(int month)
{
	int day;

	if ((month == '9') || (month == '4') || (month == '6') || (month == '11'))
		day = rand() % 30 + 1;
	if ((month == '1') || (month == '3') || (month == '5') || (month == '7') || (month == '8') || (month == '10') || (month == '12'))
		day = rand() % 31 + 1;
	if (month == '2')
		day = rand() % 28 + 1;
	return day;

}
int getYear()
{

	int year = rand() % 2016 - 2013;
	return year;
}




void printCustomer(struct customer customerX)
{
	
	printf("Name \n%20s", customerX.name);
	printf("Account Number \n%14d", customerX.accountNumber);
	printf("Balance \n%10.2f", customerX.balance);
	printf("Date of last Transaction \n%d \ %d \ %d", customerX.lastTrans.day, customerX.lastTrans.month, customerX.lastTrans.year);
}


