
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 14, 2022, 11:50 PM
 * Purpose:List 3 names alphebetically 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string n1, n2, n3;
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    //Map inputs -> outputs
    if (n1<=n2 && n1<=n3 && n2<=n3){
        cout<<n1<<endl<<n2<<endl<<n3;
    }
    else if(n1<=n2 && n1<=n3 && n3<=n2){
        cout<<n1<<endl<<n3<<endl<<n2;
    }
    else if(n2<=n1 && n2<=n3 && n1<=n3){
        cout<<n2<<endl<<n1<<endl<<n3;
    }
    else if(n2<=n1 && n2<=n3 && n3<=n1){
        cout<<n2<<endl<<n3<<endl<<n1;
    }
    else if(n3<=n1 && n3<=n2 && n1<=n2){
        cout<<n3<<endl<<n1<<endl<<n2;
    }
    else{
        cout<<n3<<endl<<n2<<endl<<n1;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}