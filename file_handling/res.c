/* C program to :
a. Open a File,
b. Write in it, And 
c. Read a file
d. Close the File
*/

#include <stdio.h>
#include <string.h>

int main()
{

    FILE *fptr; // file pointer declaration

    char *content = "This is an example for file operations- Programming Fundamentals";

    // Open the existing file GfgTest.c using fopen()
    // in write mode using "w" attribute
    fptr = fopen("file_create.txt", "w");

    // Check if this fptr is null which maybe if the file does not exist
    //To verify change reading mode in line 19 from "w" to "r" and delete file_create.txt if exist in directory
    if (fptr == NULL)
    {
        printf("File failed to open.");
    }
    else
    {
        printf("FILE OPENED.\n");
        // Write the content into the file
        if (strlen(content) > 0)
        {
            fputs(content, fptr); // writing in the file using fputs()
            fputs("\n", fptr);
        }

        // Closing the file using fclose()
        fclose(fptr);

        printf("Write operation on file is done\n");
        printf("FILE CLOSED.\n");
    }
    //Open file in "r" mode
    fptr = fopen("file_create.txt", "r");
    char file_content[100]; //char array to store string from input-file
    printf("The content of the file is:\n");
    while (fgets(file_content, 50, fptr) != NULL)
    {
        // Print the dataToBeRead
        printf("%s", file_content);
    }

    return 0;
}
