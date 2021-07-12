/*
Destructor: special member function called by compiler itself if the scope of the object ends.
Program to demonstrate:
defining destructor
*/
#include <bits/stdc++.h>
using namespace std;
class Batch
{
public: //Access specifier
    // Data Members
    string id;
    int num_stud;
    //default constructor
    Batch()
    {
        id = "1st";
        num_stud = 75;
    }
    //declare destructor
    ~Batch();
    // Member Functions()
    void print_batch()
    {
        cout << "Batch id is: " << id << endl;
        cout << "Num of students in batch is: " << num_stud << endl;
    }
};

int main()
{
    Batch batch1, batch2; // Declare an object of class Batch

    batch1.id = "B10";    //accessing data member
    batch1.num_stud = 75; // accessing data member
    batch1.print_batch(); // accessing member function

    batch2.id = "B7";      // accessing data member
    batch2.num_stud = 100; // accessing data member
    batch2.print_batch();  // accessing member function
    return 0;
}

//Destructor for Batch (defined outside class using <class-name>::)
Batch ::~Batch()
{
    cout << "Destructor called for " << id << endl;
}
