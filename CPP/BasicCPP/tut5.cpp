#include<iostream>
using namespace std;
// there are two type of header file
// 1. system header file ->> iostream 
// 2.user define header file ->> this.h
// If this.h is not present in the current library then it will throw an error

int main()
{
    int a = 4, b = 5;
    cout << "For a=4 and b=5 the following values are----->>>>>>>" << endl; // the endle is used to give a new line
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is  " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;// if b>a then it will print the integer which  is 0 in this case
    cout << "The value of a % b is " << a % b << endl;// it will print the remainder 
    cout << "The value of a++  is " << a++  << endl;// first it will print the value then increase it
    cout << "The value of ++a  is " << ++a  << endl;// first it will increase the value then print it
    cout << "The value of --a  is " << --a  << endl;
    cout << "The value of a--  is " << a--  << endl;

    // Now these are the comparisiom operators which will return 0 or 1 
    cout << "The value of a <b is " << (a <b) << endl;
    cout << "The value of a >b is " << (a >b) << endl;
    cout << "The value of a<=b is  " << (a<=b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    
    // Now these are the relational operators which will return 0 or 1 
    cout << "The value of ( (a <b) || (a>b)) is " <<( (a <b) || (a>b)) << endl;
    cout << "The value of ( (a >b) && (a==b)) is " <<( (a >b) && (a==b)) << endl;
    cout << "The value of (a!=b) is  " << (a!=b) << endl;
    return 0;
}