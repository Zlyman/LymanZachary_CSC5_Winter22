
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 12, 2022, 1:00 AM
 * Purpose:  Convert Fahrenheit to Celsius 
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
    //Set the random number seed
    
    //Declare Variables
    float f,    //Fahrenheit
          c;    //Celsius
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>f;
    //Map inputs -> outputs
    c=5.0f/9*(f-32);
    //Display the outputs
    cout<<showpoint<<fixed;
    cout<<setprecision(1)<<f<<" Degrees Fahrenheit = "<<c<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}