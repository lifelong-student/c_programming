/* 
Program to demonstrate function definition outside class.
(To define a member function outside the class definition, scope resolution :: operator 
along with class name and function name is required.)
*/

#include <bits/stdc++.h>
using namespace std;

class Batch
{
public: //Access specifier
    // Data Members
    string id;
    int num_stud;

    // Member Functions declaration
    void print_batch();
};

//Member definition outside class
void Batch :: print_batch()
{
    cout << "Batch id is: " << id << endl;
    cout << "Num of students in batch is: " << num_stud << endl;
}

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
