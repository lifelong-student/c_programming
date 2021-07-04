// C program to find and replace a word
// in a File by another given word

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to find and replace a word in File
void findAndReplaceInFile()
{
	FILE *ifp, *ofp;
	char word[100], ch, read[100], replace[100];
	int word_len, i, p = 0;

	ifp = fopen("file_search_input.txt", "r");
	ofp = fopen("file_replace_output.txt", "w+");
	if (ifp == NULL || ofp == NULL)
	{
		printf("Can't open file.");
		exit(0);
	}
	puts("THE CONTENTS OF THE FILE ARE SHOWN BELOW :\n");

	// displaying file contents
	int count=0;
	while (1)
	{
		ch = fgetc(ifp);
		if (ch == EOF)
		{
			break;
		}
		printf("%c", ch);count++;
	}

	puts("\n\nEnter the word to find:");
	fgets(word, 100, stdin);

	// removes the newline character from the string
	word[strlen(word) - 1] = word[strlen(word)];

	puts("Enter the word to replace it with :");
	fgets(replace, 100, stdin);

	// removes the newline character from the string
	replace[strlen(replace) - 1] = replace[strlen(replace)];

	fprintf(ofp, "%s - %s\n", word, replace);

	// comparing word with file
	rewind(ifp);
	while (!feof(ifp))
	{

		fscanf(ifp, "%s", read);

		if (strcmp(read, word) == 0)
		{

			// for deleting the word
			strcpy(read, replace);
		}

		// In last loop it runs twice
		fprintf(ofp, "%s ", read);
	}

	// Printing the content of the Output file
	rewind(ofp);
	while (1)
	{
		ch = fgetc(ofp);
		if (ch == EOF)
		{
			break;
		}
		printf("%c", ch);
	}

	fclose(ifp);
	fclose(ofp);
}

// Driver code
void main()
{
	findAndReplaceInFile();
}
