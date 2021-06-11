#include <stdio.h>
#include <string.h>

/* Program to show gets() and puts()
*/
int main()
{
    char string1[25]; //Hello
    gets(string1);

    //strlen(string): returns the length of string excluding NULL('\0') character
    int str_len = strlen(string1);
    printf("\nString length is: %d", str_len);

    /* strcmp(s1,s2):compares two string
    Returns:
    a. 0 if s1 and s2 are the same/equal;
    b. less than 0 if s1<s2;
    c. greater than 0 if s1>s2.
    */

    if (strcmp("Hello", "Hello") == 0)
        printf("\nTwo string are same");

    if (strcmp("hello", "Hello") == 0)
        printf("\nTwo strings are equal");
    else
        printf("\nTwo strings are unequal");

    /*strcpy(s1,s2): copies s2 (destination) into string s1 (source)
        */
    char string1_copy[25];
    strcpy(string1_copy, string1);
    puts("\n Copied string is: ");
    puts(string1_copy);
    
    /* strcat(s1,s2): concatenates string s2 at the end of string s1 */
    char str1[25] = "Programming ";
    char str2[25] = "Fundamentals";
    strcat(str1, str2); //str1 becomes destination
    puts("\n Concatenated strings are: ");
    puts(str1);

    /* strchr(s1, ch): returns a pointer to the first occurrence of character ch in string s1 */
    char *index = strchr(str1, 'm');
    puts("\n first occurence of character-m in \"Programming\" is: ");
    printf("%s", index);

    /* strstr(s1,s2): returns a pointer to the first occurrence of string s2 in string s1 */
    puts("\n first occurence of substring \"Fund\" in \"Programming Fundamentals\" is: ");
    index = strstr(str2, "Fund");
    printf("%s\n", index);

    /* strrev()	It is used to show reverse of a string */
    char str3[] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    printf("Reversed string is: \n");
    puts(strrev(str3));

    return 0;
}