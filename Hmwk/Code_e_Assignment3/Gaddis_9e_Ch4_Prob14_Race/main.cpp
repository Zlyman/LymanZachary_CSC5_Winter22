
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 16, 2022, 2:50 AM
 * Purpose: Race Evaluation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char   n1[20]{},      //Racer names 
           n2[20]{}, 
           n3[20]{}; 
    unsigned short t1, t2, t3;  //Race times 
   
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"input 3 Runners"<<endl;
    cin>>n1>>t1;
    cin>>n2>>t2;
    cin>>n3>>t3;
    
    //Map inputs -> outputs
    cout<<"Their names, then their times"<<endl;
    
    if(t1<t2 && t1<t3 && t2<t3){
        cout<<n1<<"\t"<<setw(3)<<t1<<endl;
        cout<<n2<<"\t"<<setw(3)<<t2<<endl;
        cout<<n3<<"\t"<<setw(3)<<t3;
    }
    else if(t2<t1 && t2<t3 && t1<t3){
        cout<<n2<<"\t"<<setw(3)<<t2<<endl;
        cout<<n1<<"\t"<<setw(3)<<t1<<endl;
        cout<<n3<<"\t"<<setw(3)<<t3;
    }
    else if(t1<t2 && t1<t3 && t3<t2){
        cout<<n1<<"\t"<<setw(3)<<t1<<endl;
        cout<<n3<<"\t"<<setw(3)<<t3<<endl;
        cout<<n2<<"\t"<<setw(3)<<t2;
    }
    else if(t2<t1 && t2<t3 && t3<t1){
        cout<<n2<<"\t"<<setw(3)<<t2<<endl;
        cout<<n3<<"\t"<<setw(3)<<t3<<endl;
        cout<<n1<<"\t"<<setw(3)<<t1;
    }
    else if(t3<t1 && t3<t2 && t1<t2){
        cout<<n3<<"\t"<<setw(3)<<t3<<endl;
        cout<<n1<<"\t"<<setw(3)<<t1<<endl;
        cout<<n2<<"\t"<<setw(3)<<t2;
    }
    else{
        cout<<n3<<"\t"<<setw(3)<<t3<<endl;
        cout<<n2<<"\t"<<setw(3)<<t2<<endl;
        cout<<n1<<"\t"<<setw(3)<<t1;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}