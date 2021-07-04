// C program to illustate fgetc() function
#include <stdio.h>

int main ()
{
	// open the file
	FILE *fp = fopen("test.txt","r");

	// Return if could not open file
	if (fp == NULL)
	return 0;

	do
	{
		// Taking input single character at a time
		char c = fgetc(fp);

		// Checking for end of file
		if (feof(fp))
			break ;

		printf("%c", c);
	} while(1);

	fclose(fp);
	return(0);
}
