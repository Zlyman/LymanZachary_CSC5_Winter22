
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 12, 2022, 12:12 AM
 * Purpose:  Average 5 numbers
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float test1, test2, test3, test4, test5,
            ave;    //Test scores average
            
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    //Map inputs -> outputs
    ave=(test1+test2+test3+test4+test5)/5;
    //Display the outputs
    cout<<showpoint<<fixed;
    cout<<"The average = "<<setprecision(1)<<ave;
    //Exit stage right or left!
    return 0;
}