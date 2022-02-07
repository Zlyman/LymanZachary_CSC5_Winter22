
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 4, 2022, 9:40 PM
 * Purpose: Hmwk 1
 *          Calculate and report ave July high temp for following:
 *          New York City, Denver, Phoenix
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
    //Ave temp for NYC, Denver and Phoenix 
    unsigned short nyctave,dentave, photave;
    float pcntcng,//% temp change
          nycincr,//NYC temp increase
          denincr,//Denver temp increase
          phoincr,//Phoenix temp increase
          nycntav,//NYC new ave temp
          denntav,//Denver new ave temp
          phontav;//Phoenix new ave temp
    //Initialize Variable
    //Degrees Fahrenheit 
    nyctave=85;
    dentave=88;
    photave=106;
    
    pcntcng=0.02;
    //Map the inputs/knowns to the outputs
    //Calculate the amount of temperature increase
    nycincr=pcntcng*nyctave;
    denincr=pcntcng*dentave;
    phoincr=pcntcng*photave;
    //Calculate the new average temperatures 
    nycntav=nyctave+nycincr;
    denntav=dentave+denincr;
    phontav=photave+phoincr;
    //Display the outputs
    cout<<"This program calculates the new average temperatures in July for "
            "Ney York City, Denver and Phoenix."<<endl;
    cout<<"Previous average July temperature for New York City: "<<
            nyctave<<" degrees Fahrenheit"<<endl;
    cout<<"New average July temperature for New York City: "<<
            nycntav<<" degrees Fahrenheit"<<endl; 
    cout<<"Previous average July temperature for Denver: "<<
            dentave<<" degrees Fahrenheit"<<endl;
    cout<<"New average July temperature for Denver: "<<
            denntav<<" degrees Fahrenheit"<<endl;
    cout<<"Previous average July temperature for Phoenix: "<<
            photave<<" degrees Fahrenheit"<<endl;
    cout<<"New average July temperature for Phoenix: "<<
            phontav<<" degrees Fahrenheit"<<endl;       
    //Exit the program
    return 0;
}

