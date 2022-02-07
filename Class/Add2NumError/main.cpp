
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 10, 2022, 11:20 AM
 * Purpose: Causing overflow
 */
// System Level Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables 
// These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    short op1,op2,result;
    //Initialize Variables
    cout<<"Input 2 values to sum"<<endl;
    cin>>op1>>op2;
    //Map the inputs/knowns to the outputs
    result=op1+op2;
    //Display the outputs
    cout<<"Result op1 + op2 = "<<result<<endl;
    //Exit the program
    return 0;
}

