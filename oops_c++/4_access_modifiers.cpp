/*
Program to demonstrate 3 access modifiers:
a. public : data members and member functions declared as public can be accessed inside/outside the class.
b. protected:  data members and member functions declared as protected can be accessed either inside the class or its subclass.
c. private:  data members and member functions declared as private can be accessed only inside the class by its member functions.
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
        cout << "Semester for the batch: " <<semester<< endl <<endl;
    }

private:
    int num_stud=75;

protected:
    string semester="1st";
};

int main()
{
    Batch batch1, batch2; // Declare an object of class Batch

    batch1.id = "B10";    //accessing data member
    batch1.print_batch(); // accessing member function

    batch2.id = "B7";     // accessing data member
    batch2.print_batch(); // accessing member function
    return 0;
}
