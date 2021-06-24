#include<stdio.h>  
#include<conio.h>  
  
void func() ;  
  
#pragma startup func  
#pragma exit func  
  
void main(){  
printf("\nI am in main");  
getch();  
}  
  
void func(){  
printf("\nI am in func");  
getch();  
}