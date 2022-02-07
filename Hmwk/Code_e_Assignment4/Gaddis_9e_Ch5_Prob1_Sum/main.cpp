
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 21, 2022, 11:36 PM
 * Purpose:Looping Sum
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int strtNum,    //Starting point for the sum
         usrNum,    //User input number
            sum;    //Holds the final sum
    //Initialize or input i.e. set variable values
    sum=0;
    cin>>usrNum;
    //Map inputs -> outputs
    
    for(strtNum=1;strtNum<usrNum;strtNum++){
        sum=sum+strtNum;
    }
    //Display the outputs
    cout<<"Sum = "<<sum+usrNum;
    //Exit stage right or left!
    return 0;
}