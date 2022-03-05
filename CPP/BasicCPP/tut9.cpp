#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
// loops in c++
/*
    there are three type of loops in c++
    1.while loop
    2.do while loop
    3.for loop


*/
 for (int i = 1; i < 40; i++)
 {
     cout << i << endl;
 }



int j = 1;
while (j <= 40)
{
    cout << j << endl;
    j++;
 }

 
int k = 1;
do
{
    cout <<"60 x "<<setw(2)<<k<<" = "<< setw(4)<<60*k << endl;
    k++;
 } while (k<=10);
 
return 0;
}