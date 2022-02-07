
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 29, 2022, 5:45 PM
 * Purpose: Play Roulette 
 */
// System Level Libraries
#include <iostream> //Input-Output Library
#include <string>
#include <cstdlib>  //Need for random number 
#include <ctime>    //Need for random number 
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
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int nGames;     //Number of games to play test
    unsigned int const NUMMIN =1;
    unsigned int const NUMMAX =38;
    unsigned int random;
    string ballPos;
    int wBlk, wRed, wEven, wOdd, wLow, wHigh;
    int lBlk, lRed, lEven, lOdd, lLow, lHigh;
    bool black, red, green;
    //Initialize Variables
    nGames=1000;
    wBlk=wRed=wEven=wOdd=wLow=wHigh=0;
    lBlk=lRed=lEven=lOdd=lLow=lHigh=0;
   
    
    //Map the inputs/knowns to the outputs
    for(int games=1;games<nGames;games++){
        black=red=green=false;
        random=rand()%(NUMMAX-NUMMIN +1)+NUMMIN;
        switch(random){
            case 1:red=true;break;
            case 2:black=true;break;
            case 3:red=true;break;
            case 4:black=true;break;
            case 5:red=true;break;
            case 6:black=true;break;
            case 7:red=true;break;
            case 8:black=true;break;
            case 9:red=true;break;
            case 10:black=true;break;
            case 11:red=true;break;
            case 12:black=true;break;
            case 13:red=true;break;
            case 14:black=true;break;
            case 15:red=true;break;
            case 16:black=true;break;
            case 17:red=true;break;
            case 18:black=true;break;
            case 19:red=true;break;
            case 20:black=true;break;
            case 21:red=true;break;
            case 22:black=true;break;
            case 23:red=true;break;
            case 24:black=true;break;
            case 25:red=true;break;
            case 26:black=true;break;
            case 27:red=true;break;
            case 28:black=true;break;
            case 29:black=true;break;
            case 30:red=true;break;
            case 31:black=true;break;
            case 32:red=true;break;
            case 33:black=true;break;
            case 34:red=true;break;
            case 35:black=true;break;
            case 36:red=true;break;
            default:green=true;break;         
        }
        if(random<36){
            cout<<"The ball landed on "<<random;
            if(black==true) cout<<" black."<<endl;
            if(red==true) cout<<" red."<<endl;
        }
        if(random>36){
            if(random==37) ballPos="0";
            if(random==38) ballPos="00";
            cout<<"The ball landed on "<<ballPos<<" green."<<endl;   
        }
    }
    //Display the outputs
    
    //Exit the program
    return 0;
}

