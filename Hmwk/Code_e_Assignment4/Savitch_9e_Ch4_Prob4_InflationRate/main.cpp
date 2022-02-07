
/* 
 * File:  main.cpp 
 * Author: Zachary Lyman
 * Created on January 23, 11:41 PM
 * Purpose: Inflation Calculator
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int PERCENT=100;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float crntPr,       //Current Price $'s
           pstPr,       //Year ago Price $'s
          inflRt;       //Inflation rate &
    char   again{};       //hold user selection to terminate program or not
          
    //Initialize or input i.e. set variable values
    crntPr=pstPr=inflRt=0;
    
    //Start of Loop
    do{
        cout<<"Enter current price:"<<endl;
        cin>>crntPr;
        cout<<"Enter year-ago price:"<<endl;
        cin>>pstPr;
        
        //Calculate Inflation rate
        inflRt=(crntPr-pstPr)/pstPr;
        
        //Convert to Percentage
        inflRt=inflRt*PERCENT;
        
        //Display Inlation rate to user
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Inflation rate: "<<setw(4)<<inflRt<<"%"<<endl;
        
        //Prompt user to run program again or terminate 
        cout<<"\nAgain:"<<endl;
        cin>>again;
        
        if(again=='Y'||again=='y'){
            cout<<endl;
        }
    }
    while(again=='Y'||again=='y');
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}