#include<iostream>
using namespace std;
int main()
{
    int m;
    int n;
    // << is called insertion operator
    //  >> is called extraction operator
    cout<<"Enter the value of m";
    cin >> m;
    cout << "Enter the value of n ";
    cin >> n;
    int sum = m + n;
    cout << "The value of sum of m and n is " << sum;
    return 0;
}