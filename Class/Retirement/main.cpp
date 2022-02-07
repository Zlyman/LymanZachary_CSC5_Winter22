
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 20, 2022, 11:35 AM
 * Purpose: Calculate savings with rule of 72
 */
// System Level Libraries
#include <iostream> //Input-Output Library
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables 
// These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char PERCENT=100;//Conversion of percent to decimal 

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float initSav,       //Initial Savings in $'s
          invRate,       //Investment Rate in %
           intrst,       //Yearly interest earned $'s
           retSav,       //Retirement Savings $'s
           salary,       //Salary $'s/year
          percDep,       //Percent of Salary to save each year %
          req2Rtr,       //Required Savings to Retire with $'s
          yrlyDep;       //Yearly Deposit $'s
    unsigned char nCmpPds;  //Number of compounding periods years
    unsigned short stYear;//Starting Year
    
    //Initialize Variables
    initSav=0;//$0 change if you have retirement to this point 
    invRate=5;//5%
    nCmpPds=50;//50 years
    stYear=2022;//Year to start saving
    salary=1e5f;//$100,000
    percDep=10; //10%
    
    //Map the inputs/knowns to the outputs
    //Display outputs 
    invRate/=PERCENT;
    percDep/=PERCENT;
    retSav=initSav;
    req2Rtr=salary/invRate;
    yrlyDep=salary*percDep;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<initSav<<" = Initial Principle $'s"<<endl;
    cout<<invRate*PERCENT<<" = Interest Rate %"<<endl;
    cout<<"$"<<salary<<" = Salary/Income at Retirement"<<endl;
    cout<<percDep*PERCENT<<" = % Salary to Deposit for Retirement"<<endl;
    cout<<"$"<<req2Rtr<<" = Savings required to Retire"<<endl;
    cout<<endl<<setw(10)<<"Years"<<setw(10)<<"Year"<<
            setw(12)<<"Retirement"<<setw(10)<<"Interest"<<
            setw(10)<<"Deposit"<<endl;
    for(int years=0;retSav<req2Rtr;years++){
        intrst=retSav*invRate;
        
        cout<<setw(10)<<years<<setw(10)<<years+stYear<<setw(12)<<
                retSav<<setw(10)<<intrst
                <<setw(10)<<yrlyDep<<endl;
        retSav+=intrst;
        retSav+=yrlyDep;
    }
   
    //Exit the program
    return 0;
}

