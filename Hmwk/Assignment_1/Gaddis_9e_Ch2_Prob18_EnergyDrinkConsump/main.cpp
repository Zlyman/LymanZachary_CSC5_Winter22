
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 4, 2022, 9:20 PM
 * Purpose: Hmwk 1
 *          Display the following:
 *          Num of customers who purchase more than 1
 *          energy drink a week
 *          Num of customers who prefer citrus flavor
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
    unsigned short cstmrs,//Surveyed customers
                   cstopwk,//Approximate number who purchase one or more
                   cstctrs;//Approximate number who prefer citrus
    float onepwk,//% of customers who purchase one or more a week
          citrus;//% of customers who prefer citrus flavor
    //Initialize Variables
    cstmrs=16500;
    onepwk=0.15;
    citrus=0.58;
    //Map the inputs/knowns to the outputs
    cstopwk=onepwk*cstmrs;
    cstctrs=citrus*cstmrs;
    //Display the outputs
    cout<<"This program shows the results of a customer survey."<<endl;
    cout<<"Total customers surveyed: "<<cstmrs<<" customers"<<endl;
    cout<<"Customers who buy one or more per week: "<<cstopwk
            <<" customers"<<endl;
    cout<<"customers who prefer citrus flavor: "<<cstctrs
            <<" customers"<<endl; 
    //Exit the program
    return 0;
}

