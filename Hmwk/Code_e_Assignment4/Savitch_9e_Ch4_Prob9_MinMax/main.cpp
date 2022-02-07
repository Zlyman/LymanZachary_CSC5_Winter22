
/* 
 * File: main.cpp 
 * Author: Zachary Lyman
 * Created on January 24, 2022 2:20 AM
 * Purpose:  Two Overloaded functions
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void getNum(float &,float &,float &);
float max1(float,float);
float max2(float ,float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float x,y,z;
    //Initialize or input i.e. set variable values
    x=y=z=0;
    getNum(x,y,z);
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<max1(x,y)<<endl;
    cout<<"\nLargest number from three parameter function:"<<endl;
    cout<<max2(x,y,z)<<endl;
    
    //Exit stage right or left!
    return 0;
}

void getNum(float &x, float &y, float&z){
    //Prompt for inputs
    cout<<"Enter first number:"<<endl;
    cin>>x;
    cout<<"\nEnter Second number:"<<endl;
    cin>>y;
    cout<<"\nEnter third number:"<<endl;
    cin>>z;
    cout<<endl;
}

float max1(float x, float y){
    float largest1=x;
    if (y>x)largest1=y;
    return largest1;
}
    
float max2(float x, float y, float z){
    float largest2=x;
    if(y>x && y>z)largest2=y;
    if(z>x && z>y)largest2=z;
    return largest2;
}