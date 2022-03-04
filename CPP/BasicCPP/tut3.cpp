 #include<iostream>
using namespace std;
int flo = 34;
// void Sum();
void Sum(){
    cout << "Hello sum fuction is called\n ";
    cout << "The value of flo in the sum fxn is" << flo<<"\n";
    
    // here the fxn the value of the global variable 
    // return 0; we cant return something bcz the return type of the function is void
}
int main(){
    Sum();
    int flo = 5;
    cout << "The value of the variable flo in main fxn is "<<flo;

    // here the value of the flo is printed as 5 bcz we redeclare the variable with same name so the local value is used in that 
    return 0;
}