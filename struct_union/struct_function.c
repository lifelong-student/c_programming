#include <stdio.h>
/*
Program to show passing a structure to a function by passing structure variable
*/
struct student {
   char name[50];
   int marks;
};

// function prototype
void show_struct(struct student s);

int main() {
   struct student s1;

   printf("Enter name: ");

   // read string input from the user until \n is entered and \n is discarded
   scanf("%[^\n]%*c", s1.name);

   printf("Enter marks: ");
   scanf("%d", &s1.marks);

   show_struct(s1); // passing struct as an argument

   return 0;
}

void show_struct(struct student s) {
   printf("\nDisplaying information\n");
   printf("Name: %s", s.name);
   printf("Marks: %d", s.marks);
}