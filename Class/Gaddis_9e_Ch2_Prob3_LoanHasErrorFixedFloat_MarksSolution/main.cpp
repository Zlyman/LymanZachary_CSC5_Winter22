
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 12, 2022, 10:25 AM
 * Purpose: Loan Error Problem
 */
// System Level Libraries
#include <iostream> //Input-Output Library
#include <iomanip>  //Formatting Library 
#include <cmath>    //Math Library
using namespace std;


//User Defined Libraries

//Global Constants, not Global Variables 
// These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char PERCENT=100;//Conversion of percent 
const float HLFPNY=0.005;//Half a cent
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float intRate,  //Interest Rate in %
             loan,  //Loan in $'s 
          amtPaid,  //Amount Paid
          intPaid,  //Interest Paid $'s
         monPymnt;  //Monthly Payment in $'s
    unsigned char nCmpPds;//Number of Compounding payments
            
    //Initialize Variables
    loan=1e4f;//$10,000
    intRate=1.0f/PERCENT;
    nCmpPds=36;//Number of months to pay back loan
    
    //Map the inputs/knowns to the outputs
    float temp=pow(1+intRate,nCmpPds);
    monPymnt=intRate*temp*loan/(temp-1);
    int intCorc=(monPymnt+HLFPNY)*100;   //Shift left calculate # of pennies 
    monPymnt=intCorc/100.0f;
    amtPaid=nCmpPds*monPymnt;
    intPaid=amtPaid-loan;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount:      $"<<setw(9)<<loan<<endl;
    cout<<"Monthly Interest:  "<<setw(6)
            <<static_cast<int>(intRate*PERCENT)<<"%"<<endl;
    cout<<"Number of Periods: "<<setw(6)
            <<static_cast<int>(nCmpPds)<<endl;
    cout<<"Monthly Payment:  $"<<setw(9)<<monPymnt<<endl;
    cout<<"Amount Paid Back: $"<<setw(9)<<amtPaid<<endl;
    cout<<"Interest Paid:    $"<<setw(9)<<intPaid<<endl;        
    //Exit the program
    return 0;
}

