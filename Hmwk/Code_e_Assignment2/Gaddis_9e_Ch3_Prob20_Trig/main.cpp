
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 12, 2022, 1:10 AM
 * Purpose:  Calculate the trig funcitons of an user defined angle 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Input/Output Manipulation
#include <cmath>     //CPP Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=3.14159265359;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int degree; 
    float sine, cosine, tangent, rad;
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>degree;
    //Map inputs -> outputs

    //Convert degrees to radians
    rad=degree*PI/180;
    
    //Perform Trig Calculations
    sine=sin(rad);
    cosine=cos(rad);
    tangent=tan(rad);
    
    //Display the outputs
    cout<<showpoint<<fixed;
    cout<<"sin("<<degree<<") = "<<setprecision(4)<<sine<<endl;
    cout<<"cos("<<degree<<") = "<<setprecision(4)<<cosine<<endl;
    cout<<"tan("<<degree<<") = "<<setprecision(4)<<tangent;
    //Exit stage right or left!
    return 0;
}