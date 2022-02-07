
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 4, 2022, 7:40 PM
 * Purpose: Hmwk 1
 *          Calculate number of acres in a tract 
 *          of land
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
    float lndarea,//Tract of land area
          acre,
          acrettl;//Total acres in tract of land               
    //Initialize Variables
    lndarea=391876;//391876 sqft
    acre=43560;//1 acre=43560 feet^2
    //Map the inputs/knowns to the outputs
    acrettl=lndarea/acre;
    //Display the outputs
    cout<<"This program calculated the number of acres "
            "per area of a tract of land."<<endl;
    cout<<"Land area: "<<lndarea<<" sqft"<<endl;
    cout<<"1 acre = "<<acre<<" sqft"<<endl;
    cout<<"Total acres: "<<acrettl<<" acres"<<endl; 
    //Exit the program
    return 0;
}

