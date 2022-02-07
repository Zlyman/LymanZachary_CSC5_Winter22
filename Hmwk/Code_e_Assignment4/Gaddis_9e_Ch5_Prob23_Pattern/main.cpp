
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 22, 2022, 5:36 PM
 * Purpose: Create a diamond pattern
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
    char plus;
    int userNum;
    //Initialize or input i.e. set variable values
    plus='+';
    cin>>userNum;
    //Map inputs -> outputs
    //First half of triangle
    for(int i=1;i<=userNum;i++){
        for(int j=0;j<i;j++){
            cout<<plus;
        }
        if(i!=userNum){
            cout<<endl;
        }
        if(i!=userNum){
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<endl;
    
    //Second half of triangle 
     for(int i=userNum;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<plus;
        }
        if(i>1){
            cout<<endl;
        }
        if(i>1){
            cout<<endl;
        }
    }
    //Exit stage right or left!
    return 0;
}