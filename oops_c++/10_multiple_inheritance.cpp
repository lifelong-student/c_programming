#include <iostream>
using namespace std;
/*
Program to explain multiple inheritance: a class can inherit more than one class
*/

//parent class-1
class Batch
{
public:
    Batch()
    {
        cout << "Constructor of Batch class" << endl;
    }
    //data-members
    int num_stud = 75;
    string dept = "CSE";
    void display_batch()
    {
        cout << "No. of students: " << num_stud << " and subject: " << dept << endl;
    }
};

//parent-class 2
class Subject
{
public:
    string sub_name = "Programming Fundamentals";
    void display_subject()
    {
        cout << "Subject is: " << sub_name<< endl;
    }
};

//child class
class B5 : public Batch, public Subject
{
public:
    B5()
    {
        cout << "Constructor of B5 class" << endl;
    }
};

int main()
{
    //Creating object of class B5
    B5 b5_obj;
    b5_obj.display_batch(); //from parent-1
    b5_obj.display_subject(); //from parent-2
    return 0;
}