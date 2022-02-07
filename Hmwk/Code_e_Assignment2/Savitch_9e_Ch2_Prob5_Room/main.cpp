
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 14, 2022, 3:30 PM
 * Purpose:Room capacity 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short maxCap,  //Maximum room capacity
                   numPpl;  //Number of people
    string result; 
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxCap>>numPpl;

    //Display the outputs
    if(maxCap>numPpl){
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<maxCap-numPpl
            <<" will be allowed without violation.";
    }
    else{
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<numPpl-maxCap
            <<" to avoid fire violation.";
    }
    //Exit stage right or left!
    return 0;
}