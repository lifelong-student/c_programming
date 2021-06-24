#include<stdio.h>  
#ifndef __MATH_H  
#error First include then compile  
#else  
void main(){  
    float a;  
    a=sqrt(7);  
    printf("%f",a);  
}  
#endif