#include <stdio.h>
int reverseDigits(int number);
/*
Doc here
*/
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number); //12345
    int rev=reverseDigits(number);
    printf("Reversed number = %d", rev);
    return 0;
}

int reverseDigits(int number){
        int rev = 0, remainder;
        while (number != 0) {
        remainder = number % 10; //5,4,3,2,1
        rev = rev * 10 + remainder; //5,(50+4=54),(540+3=543),(5430+2=5432), (54320+1=54321)
        number /= 10; //1234,123,12,1,0
        }
        return rev;
}