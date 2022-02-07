
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 15, 2019, 2:3 AM
 * Purpose: Bookstore points calculator 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
     short nBooks,    //Number of books purchased 
          nPoints;    //Number of points 
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>nBooks;
    //Map Input/Outputs
    switch (nBooks){
        case 0: nPoints=0;break;
        case 1: nPoints=5;break;
        case 2: nPoints=15;break;
        case 3: nPoints=30;break;
        default: nPoints=60;break;
    }
    //Display the Outputs
    cout<<"Books purchased ="<<setw(3)<<nBooks<<endl;
    cout<<"Points earned   ="<<setw(3)<<nPoints;
        
    //Exit stage right or left!
    return 0;
}