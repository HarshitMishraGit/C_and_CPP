#include<iostream>

using namespace std;
int c = 4;// this is a global variable 
int main()
{
    int a, b, c;// here we are defining local variables
    cout << "Enter the value of a: "<< endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;// now we are updating the value of local variable 
    cout << "The sum of the numbers is : "<<c << endl;
    cout << "The global value of c is "<< ::c << endl;// :: is called the global resolution operator 
    // It occupie the value of c define in global scope


    // <<<<<<<<=================================>>>>>>>>>>>>>>>>>>>>>
    // By default the value of decimal no if we are not defining taken as double 
    // but in function overloading we have to pass the value with info of the type of the variable 
    // There we need to specify with f/F or l/L after value which is defining the datatype of the variable

    float d = 23.5f;// here the f defining this is a floating value
    long double e = 43.6l; // here the l defining this is a double value

    cout << "The value of d is " << d<<endl << " and the value of e is " << endl;
    // we can see the diffrence by using sizeof function

    cout << "The sizeof 34.4 is" << sizeof(34.4) << endl;//8bytes
    cout << "The sizeof 34.4f is" << sizeof(34.4f) << endl;//4bytes
    cout << "The sizeof 34.4l is " << sizeof(34.4l) << endl;//12 bytes

    // refrence variable 

    // rohan==> monty==>rohu

    float x = 455;
    float & y = x;// y is pointing to x
    cout << x << endl;
    cout << y << endl;

    // type casting===>>> convert one datatype into another one
    int g = 45;
    cout << "The value of a is " << float(a) << endl;
    float h = 34.5674;
    cout << "The value of h is " << h  << endl;
    int i = int(h);
    cout << "The value of i  which is int(h) -----is " << i;

    return 0;
}