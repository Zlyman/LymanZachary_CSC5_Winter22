
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 12, 2022, 9:45 AM
 * Purpose: Calculate the military budget as a percentage of the 
 *          federal budget
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
const int PERCENT=100;
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float ntlBgt, //National Budget 
          dodBgt, //Department of Defense Budget
         nasaBgt, //Nasa Budget
           dPcnt, //Department of Defense Percent 
           nPcnt; //Nasa Percent
            
    //Initialize Variables
    ntlBgt=682e10;
    dodBgt=7529e8;
    nasaBgt=252e8;
    //Map the inputs/knowns to the outputs
    dPcnt=(dodBgt/ntlBgt)*PERCENT;
    nPcnt=(nPcnt/ntlBgt)*PERCENT;
    //Display the outputs
    cout<<showpoint<<fixed;
    cout<<setw(6)<<setprecision(2)<<"$"<<ntlBgt
            <<" = National Budget 2021"<<endl;
    cout<<setw(7)<<setprecision(2)<<"$"<<dodBgt
            <<" = Department of Defense Budget 2021"<<endl;
    cout<<setw(8)<<setprecision(2)<<"$"<<nasaBgt
            <<" = NASA Budget 2021"<<endl;
    cout<<setw(21)<<setprecision(2)<<dPcnt
            <<"% = Military % of total National Budget"<<endl;
    cout<<setw(21)<<setprecision(2)<<nPcnt
            <<"% = NASA % of total National Budget"<<endl;
    //Exit the program
    return 0;
}

