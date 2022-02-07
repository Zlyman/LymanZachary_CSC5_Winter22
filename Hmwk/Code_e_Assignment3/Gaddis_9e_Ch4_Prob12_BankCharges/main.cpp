
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 15, 2022, 5:35 PM
 * Purpose:Calculate banking charges
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
    unsigned short numCks;  //Number of checks
    float balance,          //Starting balance in $'s
           monFee,          //Monthly charge in $'s
          lBalFee,          //Low balance charge in $'s
           cksFee,          //Total check fee in $'s
           sumFee,          //Sum of all monthly fees in $'s
             nBal;          //Balance after monthly fee deduction 
    //Initialize or input i.e. set variable values
    monFee=10.0;
    
    //Promp user for input 
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance>>numCks;
    //Map inputs -> outputs
    
    //Check for overdraft 
    while(balance<0){
        cout<<"Urgent! Your account is overdawn"<<endl;
    }
    
    //Check for Invalid check input 
    while(numCks<0){
        cout<<"Invalid input."<<endl;
    }
    //Display starting balance
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Balance     $"<<setw(9)<<balance<<endl;
    
    //Calculate and display check fee
    if(numCks<20){
        cksFee=0.10f*numCks;
        cout<<"Check Fee   $"<<setw(9)<<cksFee<<endl;
    }
    else if(numCks>=20 && numCks<39){
        cksFee=0.08f*numCks;
        cout<<"Check Fee   $"<<setw(9)<<cksFee<<endl;
    }
    else if(numCks>=40 && numCks<59){
        cksFee=0.06f*numCks;
        cout<<"Check Fee   $"<<setw(9)<<cksFee<<endl;
    }
    else{
        cksFee=0.04f*numCks;
        cout<<"Check Fee   $"<<setw(9)<<cksFee<<endl;
    }
     
    //Display monthly fee
    cout<<"Monthly Fee $"<<setw(9)<<monFee<<endl;
    
    //Check for low balance 
    if(balance>=0 && balance<400.0f){
        lBalFee=15.0f;
        cout<<"Low Balance $"<<setw(9)<<lBalFee<<endl;
    }
    else{
        lBalFee=0;
        cout<<"Low Balance $"<<setw(9)<<lBalFee<<endl;
    }
    
    //Calculate new Balance
    nBal=balance-(cksFee+monFee+lBalFee);
    cout<<"New Balance $"<<setw(9)<<nBal;

    //Exit stage right or left!
    return 0;
}