#include <iostream>
using namespace std;
/*
Program to explain hierarchical inheritance: one parent class has more than one child class
*/

class Department
{
public:
    string dept_name = "NA";

    void show_dept()
    {
        cout << "Department is: " << dept_name;
    }
};

class CSE: public Department
{
public:  
    void show_dept()
    {
        dept_name="CSE";
        cout << "Department is: " << dept_name<<endl;
    }
};

class IT: public Department
{
public:   
    void show_dept()
    {
        dept_name="IT";
        cout << "Department is: " << dept_name<<endl;
    }
};

int main()
{
    //Creating object of class B5
    CSE cse_obj;
    IT it_obj;
    cse_obj.show_dept();
    it_obj.show_dept();
    return 0;
}