
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 22, 2022, 4:00 PM
 * Purpose:Display a rectangle 
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
    char letter;        //User letter input
    int  usrNum;        //User num input 
    //Initialize or input i.e. set variable values
    cin>>usrNum>>letter;
    //Map inputs -> outputs
    for(int i=0;i<usrNum;i++){
        for(int j=0;j<usrNum;j++){
            cout<<letter;
        }
        if(i!=usrNum-1){
            cout<<endl;
        }
    }
        
    //Display the outputs

    //Exit stage right or left!
    return 0;
}