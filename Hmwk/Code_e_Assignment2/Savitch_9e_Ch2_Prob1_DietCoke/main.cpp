
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 12, 2022, 11:26 PM
 * Purpose:  Calculate the amount of diet coke needed to kill your friend 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int mssMse,     //Mass of Mouse in Grams
       mssKMse,     //Mass of Sweetner to Kill Mouse
       mssSdCn,     //Mass of Soda Can
        wFrDes,     //Desired weight in pounds
        numCns;     //Number of Cans
    float cnvWght,  //Conversion of weight from grams to pounds
          mssFrDe,  //Mass of friends desired weight in grams
          conSwnr,  //Concentration of sweetner 
           cWghtG,  //Weight in grams for conversion
          cWghtLb;  //Weight in pounds for conversion 
    //Initialize or input i.e. set variable values
    mssMse=35;       //Grams
    mssKMse=5;       //Grams
    mssSdCn=350;     //Grams
    cWghtG=45359.2;  //Grams
    cWghtLb=100;     //Lbs
    conSwnr=0.001f;  //Sweetner concentration 
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>wFrDes;
    
    
    //Map inputs -> outputs
    cnvWght=cWghtG/cWghtLb;
    numCns=(mssKMse*cnvWght*wFrDes)/(mssSdCn*conSwnr*mssMse);
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<numCns<<" cans";
    //Exit stage right or left!
    return 0;
}