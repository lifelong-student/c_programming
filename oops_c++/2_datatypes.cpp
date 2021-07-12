// C++ program to sizes of data types
#include <iostream>
using namespace std;

int main()
{
    cout << "Size of char datatype : " << sizeof(char) << " byte" << endl; //endl: same as \n (newline)
    cout << "Size of wchar_t datatype: " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Size of int datatype: " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int datatype : " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int datatype: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of signed long int datatype: " << sizeof(signed long int) << " bytes" << endl;
    cout << "Size of unsigned long int datatype: " << sizeof(unsigned long int) << " bytes" << endl;
    cout << "Size of float datatype: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double datatype: " << sizeof(double) << " bytes" << endl;
    return 0;
}
