#include<iostream>
using namespace std;
int main()
{
    // we have three type of basic Control in cpp
    // sequence structure-> 
    /*
    entrt->action1->action2
    */
    // selection structure
    /*
    comdition-->true -> action1
    condition-->false-> action2
    */
    // loop structure
    // entry-> condition->true->a1->entry->condition
    // entry->condition->false->exit
    // example- 1)ifelse 2)ifelse ladder and 3)switch statement

// simple if else statement
    int age;
    cout << "Enter your age :";
    cin >> age;
    if(age<18){
        cout << "you are a kid ";
    }
    else{
        cout << "Welcome to the party";
    }


//if else ladder
    cout << "Enter your age :";
    cin >> age;
    if(age<18){
        cout << "you are a kid ";
    }
    else if (age==18){
        cout << "Welcome to the party and your 18 also";
    }
    else{
        cout << "Welcome to the party ";
    }


//    switch case
       cout << "Enter your age :";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "You are 18";
        break;
    case 33:
        cout << "You are 33";
        break;
    case 12:
        cout << "You are 12";
        break;
    
    default:
        cout << "You are young man";
        break;
    }
    return 0;
}