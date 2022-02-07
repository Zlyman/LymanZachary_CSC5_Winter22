
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 22, 2022, 2:36 PM
 * Purpose:Find the largest and smallest numbers
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int numEtrd,        //Number user entered
         numMin,        //Minimum Number 
         numMax;        //Maximum Number 
    //Initialize or input i.e. set variable values
    numMin=10000000;
    numMax=0;
    
    do{
        cin>>numEtrd;
        if(numEtrd>numMax) numMax=numEtrd;
        if(numEtrd<numMin && numEtrd>-99) numMin=numEtrd;
    }
    while(numEtrd!=-99);
    //Display the outputs
    cout<<"Smallest number in the series is"<<setw(2)<<numMin<<endl;
    cout<<"Largest  number in the series is"<<setw(2)<<numMax;
    //Exit stage right or left!
    return 0;
}