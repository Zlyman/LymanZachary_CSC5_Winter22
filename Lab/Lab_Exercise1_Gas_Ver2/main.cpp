/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 10, 2022, 5:40 PM
 * Purpose:  Lab 1 Optimize Fuel Purchase
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Libary
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char CNVPERC=100;//Conversion to Percentage

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float gGage,  //Gas Gage percentage full
        tnkSize,  //Size of tank in gallons
            mpg;  //Miles per Gallon
    float galReq; //Gallons Required at fill-up
    
    //Initialize Variables
    gGage=0.75f;//75% full
    tnkSize=2.2e1f;//22.0 -> Number of gallons
    mpg=0.17e2f;   //17.0 -> Gas mileage
    
    //Map the inputs/known to the outputs
    galReq=tnkSize*(1-gGage);
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Knowns for Your Particular Vehicle"<<endl<<endl;
    cout<<setw(10)<<gGage*CNVPERC<<"%  = Gas Gage % Full"<<endl;
    cout<<setw(7)<<static_cast<int>(tnkSize)<<"      = Size of Tank in Gallons"<<endl;
    cout<<setw(7)<<static_cast<int>(mpg)<<"      = Gas Mileage mpg"<<endl;
    cout<<setw(9)<<setprecision(1)<<galReq<<"    = Gallons Required to fill up"<<endl;

    //Declare Part 2 Variables
    float g1PPG,  //Gas Station 1 $'s/Gallon
        milesG1,  //Miles to Gas Station 1
        cstfil1,  //Cost to fill up $'s
        totDis1,  //Total Distance driven
        cstDrv1,  //Cost to Drive to Station 1
        totCst1,  //Total Cost for Station 1
        ppgSt1;   //Effective price per gallon station 1
 
    //Calculate the cost of Gas Station 1		
    cout<<endl<<"Gas Station 1 inputs"<<endl;
    cout<<"Input Regular Price/Gallon and miles to Station 1"<<endl;
    cin>>g1PPG>>milesG1;
    cout<<endl;
    
    //Computation for Gas Station 1
    cstfil1=galReq*g1PPG;
    totDis1=2*milesG1;
    cstDrv1=totDis1/mpg*g1PPG;
    totCst1=cstfil1+cstDrv1;
    ppgSt1=totCst1/galReq;
    
    //Outputs for Gas Station 1
    cout<<setprecision(2);
    cout<<setw(6)<<"$"<<g1PPG<<"   = Regular Gas $/Gallon"<<endl;
    cout<<setw(7)<<static_cast<int>(milesG1)<<"      = Miles to Gas Station 1"<<endl;
    cout<<setw(5)<<"$"<<cstfil1<<"   = Cost to fill up 1"<<endl;
    cout<<setw(7)<<static_cast<int>(totDis1)<<"      = Total Distance driven in Miles back and forth to Gas Station 1"<<endl;
    cout<<setw(6)<<"$"<<cstDrv1<<"   = Cost to drive distance to and from gas station 1 $"<<endl;
    cout<<setw(5)<<"$"<<totCst1<<"   = Total Cost $ with mileage to gas station 1"<<endl;
    cout<<setw(6)<<"$"<<ppgSt1<<"   = $ Price per gallon when adding in mileage to station 1"<<endl;
    
    //Declare Part 3 Variables
    float g2PPG,  //Gas Station 2 $'s/Gallon
        milesG2,  //Miles to Gas Station 2
        cstfil2,  //Cost to fill up $'s 2
        totDis2,  //Total Distance driven 2
        cstDrv2,  //Cost to Drive to Station 2
        totCst2,  //Total Cost for Station 2
        ppgSt2;   //Effective price per gallon station 2
 
    //Calculate the cost of Gas Station 2		
    cout<<endl<<"Gas Station 2 inputs"<<endl;
    cout<<"Input Regular Price/Gallon and miles to Station 2"<<endl;
    cin>>g2PPG>>milesG2;
    cout<<endl;
    
    //Computation for Gas Station 2
    cstfil2=galReq*g2PPG;
    totDis2=2*milesG2;
    cstDrv2=totDis2/mpg*g2PPG;
    totCst2=cstfil2+cstDrv2;
    ppgSt2=totCst2/galReq;
    
    //Outputs for Gas Station 2
    cout<<setprecision(2);
    cout<<setw(6)<<"$"<<g2PPG<<"   = Regular Gas $/Gallon"<<endl;
    cout<<setw(7)<<static_cast<int>(milesG2)<<"      = Miles to Gas Station 2 "<<endl;
    cout<<setw(5)<<"$"<<cstfil2<<"   = Cost to fill up"<<endl;
    cout<<setw(7)<<static_cast<int>(totDis2)<<"      = Total Distance driven in Miles back and forth to Gas Station 2"<<endl;
    cout<<setw(6)<<"$"<<cstDrv2<<"   = Cost to drive distance to and from gas station 2 $"<<endl;
    cout<<setw(5)<<"$"<<totCst2<<"   = Total Cost $ with mileage to gas station 2"<<endl;
    cout<<setw(6)<<"$"<<ppgSt2<<"   = $ Price per gallon when adding in mileage to station 2"<<endl;
    
    //Automatic Compare Station 1 and 2 prices
    if (ppgSt1<ppgSt2){
        cout<<setprecision(2)<<setw(6)<<"$"<<ppgSt1<<"   = Your cheapest option at station 1"<<endl;
    }
    else
        cout<<setprecision(2)<<setw(6)<<"$"<<ppgSt2<<"   = Your cheapest option at station 2"<<endl;
    //Exit the program
    return 0;
}

