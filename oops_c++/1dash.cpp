/*
Program to demonstrate:
a. defining a namesapce
b. calling a function of a specific namespace
*/
#include <iostream>
using namespace std;

namespace one
{
    void dummy()
    {
        cout << "dummy() is called from namesapce 'one'" << endl;
    }
}

namespace two
{
    void dummy()
    {
        cout << "dummy() is called from namesapce 'two'" << endl;
    }
}

int main()
{
    one::dummy();
    two::dummy();

    return 0;
}