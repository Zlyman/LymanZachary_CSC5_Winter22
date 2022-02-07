
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 6, 2022, 11:35 AM
 * Purpose: Free fall
 */
// System Level Libraries
#include <iostream> //Input-Output Library
#include <cmath>
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables 
// These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const float GRAVITY=32.174;//Acceleration due to gravity ft/s^2

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float dist1, //Distance in feet
          dist2, //Distance in feet
          dist3, //Distance in feet 
           time; //Time in seconds
    //Initialize Variables
    time=1;
    //Map the inputs/knowns to the outputs
    dist1=GRAVITY*time*time/2;           //Lehr Way
    dist2=GRAVITY*exp(2*log(time))/2;   //Exp-log Way
    dist3=GRAVITY*pow(time,2)/2;        //Pow same as Exp-log
    //Display the outputs
    cout<<"Free Fall Problem"<<endl;
    cout<<"Time = "<<time<<" seconds"<<endl;
    cout<<"Lehr Distance = "<<dist1<<" feet"<<endl;
    cout<<"Exp-Log Distance ="<<dist2<<" feet"<<endl;
    cout<<"Pow Distance ="<<dist3<<" feet"<<endl;
    //Exit the program
    return 0;
}

