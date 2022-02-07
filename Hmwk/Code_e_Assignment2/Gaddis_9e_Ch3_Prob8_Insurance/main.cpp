
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 12, 2022, 12:46 AM
 * Purpose: Insurance calculator 
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
    //Set the random number seed
    
    //Declare Variables
    int hWrth,  //House value in USD
        iNeed;  //Insurance need in USD 
        
    float rPrcnt;   //Reccomended percent of value to be covered 
    //Initialize or input i.e. set variable values
    rPrcnt=0.80;    //Recomended to cover 80% of total value
    
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>hWrth;
    //Map inputs -> outputs
    iNeed=hWrth*rPrcnt;
    //Display the outputs
    cout<<"You need $"<<iNeed<<" of insurance.";
    //Exit stage right or left!
    return 0;
}