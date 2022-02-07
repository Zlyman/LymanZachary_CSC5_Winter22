
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 4, 2022, 8:20 PM
 * Purpose: Hmwk 1
 *          Calculate the selling price of a circuit board
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
    float cost,//Circuit board cost
          prcprft,//Percent Profit
          profit,//Profit amount
          price;//Sales price
    //Initialize Variables
    cost=14.95;
    prcprft=0.35;
    //Map the inputs/knowns to the outputs
    profit=cost*prcprft;
    price=cost+profit;
    //Display the outputs
    cout<<"This program calculates the sales price of a circuit board"<<endl;
    cout<<"Circuit board cost: $"<<cost<<endl;
    cout<<"Total profit: $"<<profit<<endl;
    cout<<"Recommended sales price: $"<<price;
    //Exit the program
    return 0;
}

