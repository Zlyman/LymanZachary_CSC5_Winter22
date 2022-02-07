
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
    int wBlk, wRed, wEven, wOdd, wLow, wHigh, wZero, wDblZ;
    int lBlk, lRed, lEven, lOdd, lLow, lHigh, lZero, lDblZ;
    bool black, red, green;

    //Initialize Variables
    nGames=6000000;
    wBlk=wRed=wEven=wOdd=wLow=wHigh=wZero=wDblZ=0;
    lBlk=lRed=lEven=lOdd=lLow=lHigh=lZero=lDblZ=0;

    //Map the inputs/knowns to the outputs
    for(int games=1;games<nGames;games++){
        black=red=green=false;
        //Simulate the spin of a roulette wheel
        random=rand()%(NUMMAX-NUMMIN +1)+NUMMIN;
        //Set a color for each number of the roulette wheel
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
        //If ball lands on non zero space
        if(random<37){
            if(black==true){    //Ball lands on black number
                wBlk+=1;
                lRed+=1;
            }
            if(red==true){       //Ball lands on red number
                wRed+=1;
                lBlk+=1;
            }
            if(random%2==0){//Ball lands on even number
                wEven+=1;
                lOdd+=1;
            }
            else{                       //Ball lands on odd number
                wOdd+=1;
                lEven+=1;
            }
            if(random>=1&&random<19){//Ball lands 1-18
                wLow+=1;
                lHigh+=1;
            }
            else if(random>18&&random<37){//Ball lands 19-36
                wHigh+=1;
                lLow+=1;
            }
            else{
                lHigh+=1;
                lLow+=1;
            }
        }
        //If ball lands on zero space
        if(random>36){
            if(random==37){
                ballPos="0";
                wZero+=1;
                lDblZ+=1;
            }
            if(random==38){
                ballPos="00";
                wDblZ+=1;
                lZero+=1;
            }
        }
    }

    //Display the outputs
    cout<<"Black wins =  "<<wBlk<<"   Percentage = "<<(static_cast<float>(wBlk)/nGames)*100<<"%"<<endl;
    cout<<"Red wins =    "<<wRed<<"   Percentage = "<<(static_cast<float>(wRed)/nGames)*100<<"%"<<endl;
    cout<<"Even wins =   "<<wEven<<"   Percentage = "<<(static_cast<float>(wEven)/nGames)*100<<"%"<<endl;
    cout<<"Odd wins =    "<<wOdd<<"   Percentage = "<<(static_cast<float>(wOdd)/nGames)*100<<"%"<<endl;
    cout<<"Low wins =    "<<wLow<<"   Percentage = "<<(static_cast<float>(wLow)/nGames)*100<<"%"<<endl;
    cout<<"High wins =   "<<wHigh<<"   Percentage = "<<(static_cast<float>(wHigh)/nGames)*100<<"%"<<endl;
    cout<<"0 wins =       "<<wZero<<"   Percentage = "<<(static_cast<float>(wZero)/nGames)*100<<"%"<<endl;
    cout<<"00 wins =      "<<wDblZ<<"   Percentage = "<<(static_cast<float>(wDblZ)/nGames)*100<<"%"<<endl;
    //Exit the program

    return 0;

}
