#include "std_lib_facilities.h"
using namespace std;

//Yes, we can declare a non-reference function argument const
//We use const to pass a value that isn't modified in the program.
//We might want to do this for a safety check in case the program changes a variable that should not change during runtime

void f(const int){
    cout << "Function successfully called " << endl;
}

int sum(const double a, const double b)
{
    return a+b;
}

int main()
{
    f(7);
    double a= 3, b=5;

    cout << "The sum of 3 and 5 is " << sum(3,5) << endl ;
    cout << "The sum of 3 and 5 is " << sum(a,b) << endl ;

    return 0;
}
