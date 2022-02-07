
/* 
 * File:   
 * Author:Zachary Lyman
 * Created on January 23 2:22 AM 
 * Purpose: Convert and Calculate MPG
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVL2G = 0.264179;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char  again{};
    int    liters,
            miles;
    float gallons,
              mpg;
    //Initialize or input i.e. set variable values
  liters=0;
   miles=0;
  
   do{
       cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>liters;
    cout<<"\nEnter number of miles traveled:"<<endl;
    cin>>miles;
    
    //Convert Liters to Gallons
    gallons=liters*CNVL2G;
    
    //Calculate Miles per gallon
    mpg=miles/gallons;
    
    //Display output to user
    cout<<"\nmiles per gallon:"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<setw(4)<<mpg<<endl;
    //Prompt the user to run again
    cout<<"Again:"<<endl;
    cin>>again;
    if(again=='Y'||again=='y'){
       cout<<endl; 
    }
   }
   while(again=='Y'||again=='y');
   
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}