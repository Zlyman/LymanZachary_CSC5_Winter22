
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 17, 2022, 6:26 PM
 * Purpose:Horoscope compatibility 
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
    string sign1, sign2;                //User imputs
    bool fire1, earth1, air1, water1,   //Elements
         fire2, earth2, air2, water2;
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1>>sign2;
   
    //Determine first signs element 
    if(sign1=="Aries"||sign1=="Leo"||sign1=="Sagittarius"){
        fire1=true;
    }
    else if(sign1=="Taurus"||sign1=="Virgo"||sign1=="Capricorn"){
        earth1=true;
    }
    else if(sign1=="Gemini"||sign1=="Libra"||sign1=="Aquarius"){
        air1=true;
    }
    else if(sign1=="Cancer"||sign1=="Scorpio"||sign1=="Pisces"){
        water1=true;
    }
    else{
        cout<<"Invalid input for sign 1."<<endl;
    }
    
    //Determine second signs element 
    if(sign2=="Aries"||sign2=="Leo"||sign2=="Sagittarius"){
        fire2=true;
    }
    else if(sign2=="Taurus"||sign2=="Virgo"||sign2=="Capricorn"){
        earth2=true;
    }
    else if(sign2=="Gemini"||sign2=="Libra"||sign2=="Aquarius"){
        air2=true;
    }
    else if(sign2=="Cancer"||sign2=="Scorpio"||sign2=="Pisces"){
        water2=true;
    }
    else{
        cout<<"Invalid input for sign 2."<<endl;
    }
            
    //Compare elements and dispaly outputs
    if(fire1==true && fire2==true){
        cout<<sign1<<" and "<<sign2
            <<" are compatible Fire signs.";
    }
    else if(earth1==true && earth2==true){
        cout<<sign1<<" and "<<sign2
            <<" are compatible Earth signs.";
    }
    else if(air1==true && air2==true){
        cout<<sign1<<" and "<<sign2
            <<" are compatible Air signs.";
    }
    else if(water1==true && water2==true){
        cout<<sign1<<" and "<<sign2
            <<" are compatible Water signs.";
    }
    else{
        cout<<sign1<<" and "<<sign2
            <<" are not compatible signs.";
    }

    //Exit stage right or left!
    return 0;
}