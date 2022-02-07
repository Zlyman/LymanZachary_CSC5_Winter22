
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 12, 2022, 12:14 AM
 * Purpose:  Calculate calories consumed from a bag of cookies 
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
    //Set the random number seed
    
    //Declare Variables
    short bAmnt,    //Number of total cookies in the bag
        sPerBag,    //Number of servings in the sPerBag
        calPSrv,    //Calories per serving
        cConsmd;    //Cookies consumed
   
    float ckePSrv,    //Cookies per serving
          calPCke,    //Calories per cookie
             cTot;    //Total calories consumed
             
    //Initialize or input i.e. set variable values
    bAmnt=40;       //Bag holds 40 Cookies
    sPerBag=10;     //10 serving per sPerBag
    calPSrv=300;    //Caloires per serving
    
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cConsmd;
    //Map inputs -> outputs
    ckePSrv=static_cast<float>(bAmnt)/sPerBag;
    calPCke=calPSrv/ckePSrv;
    cTot=calPCke*cConsmd;
    
    //Display the outputs
    cout<<"You consumed "<<cTot<<" calories.";
    //Exit stage right or left!
    return 0;
}