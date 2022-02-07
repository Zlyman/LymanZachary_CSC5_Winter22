
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 14, 2022, 3:40 PM
 * Purpose:Sum of numbers
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
    short num1, num2, num3, num4, num5, num6, num7, num8, num9, num10,
            negSum, //Negative number sum
            posSum, //Positive number sum
            totSum; //Total sum
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10;
    //Map inputs -> outputs
    num1<0?negSum+=num1:posSum+=num1;
    num2<0?negSum+=num2:posSum+=num2;
    num3<0?negSum+=num3:posSum+=num3;
    num4<0?negSum+=num4:posSum+=num4;
    num5<0?negSum+=num5:posSum+=num5;
    num6<0?negSum+=num6:posSum+=num6;
    num7<0?negSum+=num7:posSum+=num7;
    num8<0?negSum+=num8:posSum+=num8;
    num9<0?negSum+=num9:posSum+=num9;
    num10<0?negSum+=num10:posSum+=num10;
    
    totSum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive Sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<totSum;
    //Exit stage right or left!
    return 0;
}