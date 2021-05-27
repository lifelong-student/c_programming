/*
Program to demonstrate :
a. implicit typecasting (lower-> higher datatype ocnversion)
b. explicit typecasting ( lower ->higher and higher -> lower both are allowed)
*/
#include <stdio.h>

int main()
{
    char cnum = 'a';
    int inum = 2;
    float fnum = 3.23;
    double dnum = 4.56;

    char cres;
    int ires;
    float fres;
    double dres;

    //implict type conversion
    ires = inum + cnum;
    printf("char to int implicit conversion of cnum. ires: %d\n", ires);

    fres = fnum + inum;
    printf("int to float implicit conversion of inum. ires: %0.2f\n", fres);

    dres = cnum + dnum;
    printf("char to double implicit conversion of cnum. ires: %0.2lf\n", dres);

    //explicit type conversion
    cres = cnum + (char)inum;
    printf("int to char explicit conversion of inum. ires: %c\n", cres);
    
    dres = (int)fnum + (int)dnum;
    printf("float to char explicit conversion of fnum and double to int explicit conversion of dnum. ires: %d\n", dres);

    return 0;
}