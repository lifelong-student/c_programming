#include <stdio.h>
/*
Program to show passing a structure to a function by passing individual data elements
*/
struct student {
   char name[50];
   int marks;
};

// function prototype/declaration
void show_struct(char [],int);

int main() {
   struct student s1;

   printf("Enter name: ");

   // read string input from the user until \n is entered and \n is discarded
   scanf("%[^\n]%*c", s1.name);

   printf("Enter marks: ");
   scanf("%d", &s1.marks);

   show_struct(s1.name,s1.marks); // passing struct as an argument

   return 0;
}

void show_struct(char name[],int marks) {
   printf("\nDisplaying information\n");
   printf("Name: %s\n", name);
   printf("Marks: %d", marks);
}