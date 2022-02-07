
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 16, 2022, 4:10 PM
 * Purpose:Internet service provider menu 
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
    float aPrice,       //A package base price
          bPrice,       //B package base price
          cPrice,       //C package base price 
          cPerHr,       //Carge per additional hour
            bill;       //Total bill
    char  choice;       //Package choice
    unsigned short hour;//Number of additional hours 
    //Initialize or input i.e. set variable values
    aPrice=9.95;
    bPrice=14.95;
    cPrice=19.95;
    //Get user input 
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>choice>>hour;
    //Map inputs -> outputs
    switch(choice){
        case 'A':
            if(hour>10 && hour<=744){
                cPerHr=(hour-10)*2.00f;
            }
            else if(hour<=10 && hour>=0){
                cPerHr=0.00f;
            }
            else{
                cout<<"You entered an invalid number of hours"<<endl;
            }
            bill=aPrice+cPerHr;
        break;
        case 'B':
            if(hour>20 && hour<=744){
                cPerHr=(hour-20)*1.00f;
            }
            else if(hour<=20 && hour>=0){
                cPerHr=0.00f;
            }
            else{
                cout<<"You entered an invalid number of hours"<<endl;
            }
            bill=bPrice+cPerHr;
        break;
        case 'C':
            if(hour>=0 && hour<=744){
                cPerHr=0.00F;
            }
            else{
                cout<<"You entered an invalid number of hours"<<endl;
            }
            bill=cPrice;
        break;
        default: cout<<"You entered an invalid letter and or number"<<endl;
    }   
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Bill = $"<<setw(6)<<bill;
    //Exit stage right or left!
    return 0;
}