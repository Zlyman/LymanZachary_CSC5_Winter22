
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 5, 2022, 11:20 AM
 * Purpose: Lab Exercise 1
 *          Compare and find the cheapest gas price 
 */
// System Level Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables 
// These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float gTankPt,    //Percentage full of gas tank
           gTConv,    //Conversion for gas tank percentage full
          gTankSz,    //Gas tank size in gallons
              mpg,    //Miles per gallon
          gToFill,    //Gallons needed to fill tank
           gPrSt1,    //Gas price station 1
           gPrSt2,    //Gas price station 2
           mToSt1,    //Miles to station 1
           mToSt2,    //Miles to station 2
          totDSt1,    //Total distance to station 1
          totDSt2,    //Total distance to station 2
          cToFil1,    //Cost to fill station 1
          cToFil2,    //Cost to fill station 2
           cToDr1,    //Cost to Drive to station 1
           cToDr2,    //Cost to Drive to station 2
           cWiDr1,    //Total cost with drive to station 1
           cWiDr2,    //Total cost with drive to station 2
          gCstSt1,    //Total cost per gallon station 1
          gCstSt2;    //Total cost per gallon station 2
    //Initialize Variables
    
    //Map the inputs/knowns to the outputs
    cout<<"Gas Price Calculator"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Please enter the size of your gas tank:";
    cin>>gTankSz;
    cout<<"\nPlease enter how full your gas tank is as a percentage:";
    cin>>gTankPt;
    cout<<"\nPlease enter your vehicle's MPG:";
    cin>>mpg;
    
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"\nPlease enter the gas price for station 1:$";
    cin>>gPrSt1;
    cout<<"\nPlease enter how many miles you are from station 1:";
    cin>>mToSt1;
    cout<<"\nPlease enter the gas price for station 2:$";
    cin>>gPrSt2;
    cout<<"\nPlease enter how many miles you are from station 2:";
    cin>>mToSt2;
    
    gTConv=gTankPt/100;
    gToFill=gTankSz*(1-gTConv);    
    
    cToFil1=gToFill*gPrSt1;
    totDSt1=mToSt1*2;
    cToDr1=(totDSt1/mpg)*gPrSt1;
    cWiDr1=cToDr1+cToFil1;
    gCstSt1=cWiDr1/gToFill;
   
    cToFil2=gToFill*gPrSt2;
    totDSt2=mToSt2*2;
    cToDr2=(totDSt2/mpg)*gPrSt2;
    cWiDr2=cToDr2+cToFil2;
    gCstSt2=cWiDr2/gToFill;
            
    //Display the outputs
    
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Gallons Required to fill up: "<<gToFill<<" gallons."<<endl;
    cout<<"----------------------- STATION 1 -------------------------"<<endl;
    cout<<"Cost to fill at station 1: $"<<cToFil1<<endl;
    cout<<"Back and forth distance of station 1: "<<totDSt1<<" miles"<<endl;
    cout<<"Cost to drive station 1 distance: $"<<cToDr1<<endl;
    cout<<"Total cost with mileage to gas station 1: $"<<cWiDr1<<endl;
    
    cout<<"----------------------- STATION 2 -------------------------"<<endl;
    cout<<"Cost to fill at station 2: $"<<cToFil2<<endl;
    cout<<"Back and forth distance of station 2: "<<totDSt2<<" miles"<<endl;
    cout<<"Cost to drive station 2 distance: $"<<cToDr2<<endl;
    cout<<"Total cost with mileage to gas station 2: $"<<cWiDr2<<endl;
    
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"------------------------ SUMMARY --------------------------"<<endl;
    if(gCstSt1<gCstSt2){
        cout<<"Station 1 is the cheapest option with a price of:$"<<gCstSt1;
        cout<<"\nCompared to station 2 with a price of:$"<<gCstSt2;    
    }
    else{
        cout<<"Station 2 is the cheapest option with a price of:$"<<gCstSt2;
        cout<<"\nCompared to station 1 with a price of:$"<<gCstSt1
                <<" per gallon";
    }
    cout<<"\n-----------------------------------------------------------"<<endl;
    //Exit the program
    return 0;
}
 
