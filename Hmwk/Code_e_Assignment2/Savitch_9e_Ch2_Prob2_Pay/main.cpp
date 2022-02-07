
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 14, 2022, 3:00 PM
 * Purpose:  Calculate new salary and retro pay
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
    float pAnnSal,  //Previous annual salary
          nAnnSal,  //New annual salary
          nMonSal,  //New monthly salary
           payInc,  //% pay increase
           retPay;  //Retro pay
    //Initialize or input i.e. set variable values
    payInc=0.076;
    
    cout<<"Input previous annual salary."<<endl;
    cin>>pAnnSal;
    //Map inputs -> outputs
    nAnnSal=payInc*pAnnSal+pAnnSal;
    nMonSal=nAnnSal/12;
    retPay=(nAnnSal/12-pAnnSal/12)*6;
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Retroactive pay    = $"<<setw(7)<<retPay<<endl;
    cout<<"New annual salary  = $"<<setw(6)<<nAnnSal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<nMonSal;
    //Exit stage right or left!
    return 0;
}