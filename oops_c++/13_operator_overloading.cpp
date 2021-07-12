/*
Program to demonstrate operator overloading:
a. for concatenating two strings via '+' operator

Following operators can't be overloaded
Scope operator (::)
sizeof
member selector(.)
member pointer selector(*)
ternary operator(?:)
*/

#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
public:
	char str[20];

	void input_string()
	{
		cin >> str;
	}
	void output_string()
	{
		cout << str;
	}
	MyString operator+(MyString x) //Concatenating MyString
	{
		MyString s;
		strcat(str, x.str);
		strcpy(s.str, str);
		return s;
	}
};
int main()
{
	MyString str1, str2, str3;
	cout << "\nEnter First String : ";
	str1.input_string();
	cout << "\nEnter Second String: ";
	str2.input_string();

	str3 = str1 + str2; //Strings are concatenated. Overloaded '+' operator
	cout << "\n Concatenated String is: ";
	str3.output_string();

	return 0;
}