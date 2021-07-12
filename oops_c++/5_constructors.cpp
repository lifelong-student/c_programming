/*
Constructor: Special class members called by compiler every time an object of that class is instantiated. 
Constructors have the same name as the class.
They can be defined inside/outside (::) class definition.

Program to demonstrate three types of constructors:
a. Default constructors
b. Parametrized constructors
c. Copy constructors: initializes an object using another object of the same class. 
*/

#include <bits/stdc++.h>
using namespace std;
class Batch
{
public: //Access specifier
    // Data Members
    string id;
    // Member Functions()
    void print_batch()
    {
        cout << "Batch id is: " << id << endl;
        cout << "Num of students in batch is: " << num_stud << endl;
        cout << "Semester for the batch: " << semester << endl;
    }
    //default constructor
    Batch()
    {
        num_stud = 75;
        semester = "1st";
    }

    //parameterized constructor
    Batch(string id, int num, string sem)
    {
        id = id;
        num_stud = num;
        semester = sem;
    }

    //copy constructor
    Batch(const Batch &b)
    {
        id = b.num_stud;
        num_stud = b.num_stud;
        semester = b.semester;
    }

private:
    int num_stud;

protected:
    string semester;
};

int main()
{
    cout << "Default constructor is called" << endl;
    Batch batch1; //Default constructor is called

    batch1.id = "B10";
    batch1.print_batch();

    cout << "Parametrized constructor is called" << endl;
    Batch batch2("B11", 100, "2nd"); //parameterized constructor is called
    batch2.print_batch();

    cout << "Copy constructor is called" << endl;
    Batch batch3 = batch2; //copy constructor is called
    batch3.print_batch();

    return 0;
}