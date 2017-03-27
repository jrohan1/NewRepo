

#include "stdafx.h"
#include "stdio.h"
#include "string.h"

void main()

{
	char string1[21] = "9y5fKLI5tF7posEg7e3R";
	char string2[21] = "8uyT5RefR54Hy9oiMhs6";
	char string3[21] = "HG87hy7T5R4efGHY765i";

	printf("BEFORE: \n");
	printf("String 1 = %s\n", string1);
	printf("String 2 = %s\n", string2);
	printf("String 3 = %s\n", string3);
	printf("\n\nAFTER:\n");

	int i = 0;
	int count = 0;
	for (i = 0; i < 20; i++)
	{
		if (string1[i] >= '0' && string1[i] <= '9')
		{
			string1[i] = ' ';
			count++;
		}
	}
	printf("String 1 = %s <%d digits replaced>\n", string1, count);

	int count2 = 0;

	for (i = 0; i < 20; i++)
	{
		if (string2[i] >= 'A' && string2[i] <= 'Z')
		{
			string2[i] = string2[i] + 32;
			count2++;

		}
	}
	printf("String 2 = %s <%d characters converted to lowercase>\n", string2, count2);

int count3 = 0;

	for (i = 0; i < 20; i++)
{
	if (string3[i] >= 'a' && string3[i] <= 'z')
	{
		string3[i] = string3[i] - 32;
		count3++;

	}
}
printf("String 3 = %s <%d characters converted to UPPERCASE>\n", string3, count3);
}