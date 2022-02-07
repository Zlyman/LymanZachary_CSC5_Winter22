
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 4, 2022, 11:00 PM
 * Purpose: Hmwk 1
 *          Program that displays:
 *          Num of millimeters higher in 5 years
 *          Num of millimeters higher in 7 years
 *          Num of millimeters higher in 10 years
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
    float amntpyr,//Amount ocean rises per year
          ocnlv5,//Amount after 5 years
          ocnlv7,//Amount after 7 years
          ocnlv10;//Amount after 10 years
    //Initialize Variables
    amntpyr=1.5;//Millimeters 
    //Map the inputs/knowns to the outputs
    ocnlv5=amntpyr*5;
    ocnlv7=amntpyr*7;
    ocnlv10=amntpyr*10;
    //Display the outputs
    cout<<"This program calculates the amount the ocean level will"
            "rise per unit of time."<<endl;
    cout<<"After 5 years the ocean will rise "<<ocnlv5<<" millimeters";
    cout<<"\nAfter 7 years the ocean will rise "<<ocnlv7<<" millimeters";
    cout<<"\nAfter 10 years the ocean will rise "<<ocnlv10<<" millimeters";
    //Exit the program
    return 0;
}

