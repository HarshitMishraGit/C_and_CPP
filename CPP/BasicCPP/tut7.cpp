#include<iostream>
#include<iomanip>// to use setw
using namespace std;
int main()
{
    int a = 5;
    cout << "The value of a is " << a << endl;
    // Constant in c++

    const int f = 4;
    cout << "The value of f is " << f << endl;

    // f = 3 * a; this will throw an error bcz f is a constant

    int b = 4526;
    cout << "The value of a without setw is :" << a << endl;
    cout << "The value of b without setw is :" << b << endl;
    

    // setw is a function which sets the width of the printing no
    //if you want your numbers to be in right justify manner you can use setw
    cout << "The value of a with setw is :" << setw(4)<<a << endl;//    5
    cout << "The value of b with setw is :" << setw(4)<< b << endl;//4526
    return 0;
}