
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
    //Need to use long int to properly display budget values to avoid overflow
    long int ntlBgt,     //National Budget 
             dodBgt,     //Department of Defense Budget
            nasaBgt;     //NASA Budget
    float dPcnt, //Department of Defense Percent 
          nPcnt; //Nasa Percent
            
    //Initialize Variables
    ntlBgt=6820000000000;
    dodBgt=752900000000;
    nasaBgt=25200000000;
    //Map the inputs/knowns to the outputs
    dPcnt=(static_cast<float>(dodBgt)/ntlBgt)*PERCENT;
    nPcnt=(static_cast<float>(nasaBgt)/ntlBgt)*PERCENT;
    //Display the outputs
    cout<<"    Percent Calculator"<<endl;
    cout<<showpoint<<fixed;
    cout<<setw(6)<<setprecision(2)<<"$"<<ntlBgt
            <<" = National Budget 2021"<<endl;
    cout<<setw(7)<<setprecision(2)<<"$"<<dodBgt
            <<" = Department of Defense Budget 2021"<<endl;
    cout<<setw(8)<<setprecision(2)<<"$"<<nasaBgt
            <<" = NASA Budget 2021"<<endl;
    cout<<setw(18)<<setprecision(2)<<dPcnt
            <<"% = Military % of total National Budget"<<endl;
    cout<<setw(18)<<setprecision(2)<<nPcnt
            <<"% = NASA % of total National Budget"<<endl;
    //Exit the program
    return 0;
}

