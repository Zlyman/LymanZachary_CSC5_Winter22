
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 12, 2019, 10:48 PM
 * Purpose:  Calculate the gross pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int hrWrkd,     //Hours Worked
         pRate;     //$'s/Hour pay pRate
    float pChck;    //Pay Check in $'s 
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>pRate>>hrWrkd;
    //Map inputs -> outputs
    pChck=hrWrkd<40?hrWrkd*pRate:(40.0f*pRate)+((hrWrkd-40.0f)*2.0f*pRate);
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Paycheck = $"<<setw(7)<<pChck;
    //Exit stage right or left!
    return 0;
}