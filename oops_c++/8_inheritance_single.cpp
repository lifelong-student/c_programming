#include <iostream>
using namespace std;
/*
Program to explain single inheritance: one class inherits exactly one class 
*/

//parent class
class Batch
{
public:
    Batch()
    {
        cout << "Constructor of Batch class" << endl;
    }
    //data-members
    int num_stud;
    string subject;

    void display_batch()
    {
        cout << "No. of students: " << num_stud << " and subject: " << subject << endl;
    }
};

//child class
class B5 : public Batch
{
public:
    B5()
    {
        num_stud = 75;
        subject = "Programming Fundamentals";
        cout << "Constructor of B5 class" << endl;
    }
};

//child class
class B7 : public Batch
{
public:
    B7()
    {
        num_stud = 60;
        subject = "Object Oriented Paradigm";
        cout << "Constructor of B7 class" << endl;
    }
};
int main()
{
    //Creating object of class B5
    B5 b5_obj;
    B7 b7_obj;
    b5_obj.display_batch();
    b7_obj.display_batch();
    return 0;
}