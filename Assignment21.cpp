// Assignment21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdarg.h>
#include "stdlib.h"

struct Patient
{
	int patientId;
		float temperature;
		float pulseRate;
		float respRate;
		float bpSystolic;
		float bpDiastolic;
};

void main(int argc, char *argv[])
{
	struct Patient record;

	record.patientId = atoi(argv[1]);
	record.temperature = atof(argv[2]);
	record.pulseRate = atof(argv[3]);
	record.respRate = atof(argv[4]);
	record.bpSystolic = atof(argv[5]);
	record.bpDiastolic = atof(argv[6]);

	FILE *fptr;
	fptr = fopen("F:\\log.txt", "a");

	if (fptr == NULL)
	{
		printf("File could not be opened !!\n");
		return;
	}
	else
	{

		
			fprintf(fptr, "%s\t%s\t%d\t%f\t%f\t%f\t%f\t%f\n",__DATE__,__TIME__,record.patientId,record.temperature,record.pulseRate,record.respRate,record.bpSystolic, record.bpDiastolic);


		fclose(fptr);
		return;
	}
}