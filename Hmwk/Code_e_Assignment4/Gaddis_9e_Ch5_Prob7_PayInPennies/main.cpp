
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 21, 2022, 11:56 PM
 * Purpose:Looping Sum
 */

#include <iostream>  //Input/Output Library
#include <math.h>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int day;
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    cin >> day;
    if (day >= 1){
    //Display the outputs
    
    cout << fixed << setprecision(2);
    cout << "Pay = $" << setw(3) << ((pow(2,day) - 1) * 0.01);
    }
    //Exit stage right or left!
    return 0;
}