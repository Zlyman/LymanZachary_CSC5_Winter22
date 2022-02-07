
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 4, 2022, 8:40 PM
 * Purpose: Hmwk 1
 *          Program that calculates and displays:
 *          Amount paid for stock w/o commission
 *          Amount of commission
 *          Total amount paid
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
    float price,//Stock price
          comssn,//% Commission paid to stockbroker
          bsepric,//Price paid w/o commission
          comamnt,//Amount of commission paid
          total;//Total ammount paid
    unsigned short numshrs;//Number of shares bought 
    //Initialize Variables
    price=35;
    comssn=0.02;
    numshrs=750;
    //Map the inputs/knowns to the outputs
    bsepric=numshrs*price;
    comamnt=comssn*bsepric;
    total=comamnt+bsepric;
    //Display the outputs
    cout<<"This program calculates the commission on a"
            "stock market transaction"<<endl;
    cout<<"Amount paid for stock shares: $"<<bsepric<<endl;
    cout<<"Commission amount: $"<<comamnt<<endl;
    cout<<"Total amount paid: $"<<total<<endl; 
    //Exit the program
    return 0;
}

